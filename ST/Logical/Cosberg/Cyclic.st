
PROGRAM _CYCLIC
	
	CASE STATO OF
		STATO_SPENTO: // attendiamo l'avvio
			// attivazione del nastro trasportatore
			IF NASTRO_ON THEN
				STATO := STATO_ACCESO;
				NASTRO_ON:= FALSE;
			END_IF;
			
		STATO_ACCESO:
			
			// In caso di emergenza spegnamo tutto senza pensarci due volte e cambiamo stato
			IF STOP_EMERGENZA THEN
				ALIMENTAZIONE := 0;
				SALDATURA_ON := 0;
				FORATURA_ON := 0;
				AVVITATURA_ON := 0;
				QUALITY_CHECK := 0;
				// cambiamo stato
				STATO := STATO_SPENTO;
			ELSE  // se non c'è emergenza lavoriamo normalmente
				// se è presente un pezzo in staz_1
				IF STAZ_1 AND C_MAN_IN < CILCI_MANUTENZIONE THEN
					// chiamo la funzione per la stazione 1
					GESTIONE_STAZ_1(TIPO := TIPO_TRIGGER , TEMPO :=  T#0s , TRIGGER :=  PRESENZA_PEZZO, AZIONE := ALIMENTAZIONE);
					// se si verifica l'edge negativo disattivo la stazione e conto il pezzo
					IF EDGENEG(ALIMENTAZIONE) THEN
						PRESENZA_PEZZO := FALSE;
						STAZ_1 := FALSE;
						C_MAN_IN := C_MAN_IN + 1;
					END_IF;
				END_IF;
				// se è presente un pezzo in staz_2
				IF STAZ_2 THEN 
					// chiamo la funzione per la stazione 2
					GESTIONE_STAZ_2(TIPO := TIPO_TEMPO , TEMPO :=  T#5s , TRIGGER :=  FALSE , AZIONE := SALDATURA_ON);
					// se si verifica l'edge negativo disattivo la stazione
					STAZ_2 := NOT EDGENEG(SALDATURA_ON);
				END_IF;
				// se è presente un pezzo in staz_3
				IF STAZ_3 THEN
					// chiamo la funzione per la stazione 3
					GESTIONE_STAZ_3(TIPO := TIPO_TEMPO , TEMPO :=  T#3s , TRIGGER := FALSE, AZIONE := FORATURA_ON);
					// se si verifica l'edge negativo disattivo la stazione
					STAZ_3 := NOT EDGENEG(FORATURA_ON);
				END_IF;
				// se è presente un pezzo in staz_4
				IF STAZ_4 THEN
					// chiamo la funzione per la stazione 4
					GESTIONE_STAZ_4(TIPO := TIPO_TEMPO , TEMPO :=  T#4s , TRIGGER :=  FALSE, AZIONE := AVVITATURA_ON);
					// se si verifica l'edge negativo disattivo la stazione
					STAZ_4 := NOT EDGENEG(AVVITATURA_ON);
				END_IF;
				// se è presente un pezzo in staz_5
				IF STAZ_5 THEN
					// chiamo la funzione per la stazione 5
					GESTIONE_STAZ_5(TIPO := TIPO_TRIGGER , TEMPO :=  T#0s , TRIGGER :=  QUALITY_CHECK_DONE, AZIONE := QUALITY_CHECK);
					// se si verifica l'edge negativo disattivo la stazione e incremento il contatore finale
					IF EDGENEG(QUALITY_CHECK) THEN
						QUALITY_CHECK_DONE := FALSE;
						STAZ_5 := FALSE;
						C_MAN_OUT := C_MAN_OUT + 1;
					END_IF;
				END_IF;
				// verifichiamo se l'ultimo pezzo è uscito dalla stazione
				IF C_MAN_OUT >= CILCI_MANUTENZIONE THEN
						STATO := STATO_MANUTENZIONE;
				END_IF;
			END_IF;
		
		STATO_MANUTENZIONE:
			MAI := TRUE;
			IF MAIR THEN
				C_MAN_IN := 0;
				C_MAN_OUT := 0;
				MAI := FALSE;
				MAIR := FALSE;
				STATO := STATO_ACCESO;	
				
			END_IF;
	END_CASE;
END_PROGRAM
