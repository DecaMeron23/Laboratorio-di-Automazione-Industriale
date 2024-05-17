
(* function block per la gestione delle singole stazioni *)
FUNCTION_BLOCK GESTIONE_STAZIONE
	
	// Se l'azione non è attiva
	IF NOT AZIONE THEN
		// inizzializzazione del temporizzatore
		TEMPORIZZATORE := T#0s;
		// attivazione azione
		AZIONE:= TRUE;
	END_IF;
	
	
	CASE TIPO OF
		TIPO_TRIGGER:
			// se è presente il fornte positivo di trigger
			IF EDGEPOS(TRIGGER) THEN
				// segnalo che è avvenuto l'evento
				EVENTO:= TRUE;
			END_IF;
			
		TIPO_TEMPO: 
			//incremento del temporizzatore
			TEMPORIZZATORE := TEMPORIZZATORE + DELTA_T;
			// verifica superamento del tempo
			IF TEMPORIZZATORE >= TEMPO THEN
				EVENTO:= TRUE;
			END_IF;
	END_CASE;
	
	// gestione azioni se si verifica l'evento
	IF EVENTO THEN
		AZIONE:= FALSE;
	END_IF;
	
END_FUNCTION_BLOCK
