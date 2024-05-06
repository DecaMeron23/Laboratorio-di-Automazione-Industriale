PROGRAM _CYCLIC
<?xml version="1.0"?>
<?AutomationStudio FileVersion="4.9"?>
<!-- Automation Studio Generated XML Section -->
<networks maxcolumn="0">
	<network label="" comment="Avvio della macchina simulato dalla variabile on che identifica che è partito un cilco" row="2" column="0" commented="0">
		<row>
			<contact type="open" name="START"/>
			<contact type="closed" name="MAN"/>
			<contact type="closed" name="ON"/>
			<coil type="set" name="ON"/>
		</row>
		<row>
			<empty/>
			<empty/>
			<empty or="true"/>
			<coil type="set" name="MUOVI"/>
		</row>
	</network>
	<network label="" comment="Avviamo il nastro trasportatore" row="1" column="0" commented="0">
		<row>
			<contact type="open" name="ON"/>
			<contact type="open" name="MUOVI"/>
			<line/>
			<coil type="set" name="CONVon"/>
		</row>
	</network>
	<network label="" comment="Avviamo per un secondo il CONVon" row="6" column="0" commented="0">
		<row>
			<empty/>
			<empty/>
			<functionblock position="header" name="zzTON00000001" type="TON"/>
			<empty/>
			<empty/>
			<empty/>
		</row>
		<row>
			<contact type="open" name="ON"/>
			<contact type="open" name="CONVon"/>
			<functionblock position="top" type="TON"><input name="IN"/><output name="Q"/></functionblock>
			<line/>
			<line/>
			<coil type="reset" name="CONVon"/>
		</row>
		<row>
			<empty/>
			<analog type="input" name="t1s"/>
			<functionblock position="bottom" type="TON"><input name="PT"/><output name="ET"/></functionblock>
			<empty or="true"/>
			<line/>
			<coil type="reset" name="MUOVI"/>
		</row>
		<row>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
			<empty or="true"/>
			<contact type="closed" name="BUONO"/>
			<coil type="set" name="FOTOCAMERA"/>
		</row>
		<row>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
			<empty or="true"/>
			<contact type="open" name="BUONO"/>
			<coil type="reset" name="BUONO"/>
		</row>
		<row>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
			<empty or="true"/>
			<coil type="reset" name="ON"/>
		</row>
	</network>
	<network label="" comment="Attiviamo la fotocamera per contare i pezzi" row="3" column="0" commented="0">
		<row>
			<empty/>
			<empty/>
			<functionblock position="header" name="zzTON00000000" type="TON"/>
			<empty/>
			<empty/>
		</row>
		<row>
			<contact type="open" name="ON"/>
			<contact type="open" name="FOTOCAMERA"/>
			<functionblock position="top" type="TON"><input name="IN"/><output name="Q"/></functionblock>
			<line/>
			<coil type="reset" name="FOTOCAMERA"/>
		</row>
		<row>
			<empty/>
			<analog type="input" name="tFotocamera"/>
			<functionblock position="bottom" type="TON"><input name="PT"/><output name="ET"/></functionblock>
			<empty or="true"/>
			<coil type="set" name="RISULTATI"/>
		</row>
	</network>
	<network label="" comment="Verifichiamo se sono uguali" row="6" column="0" commented="0">
		<row>
			<analog type="input" name="n_kit"/>
			<function position="top" type="EQ"><input name="" extensible="true"/><output name="1"/></function>
			<contact type="open" name="RISULTATI"/>
			<line/>
			<line/>
			<coil type="set" name="BUONO"/>
		</row>
		<row>
			<analog type="input" name="n_items"/>
			<function position="bottom" type="EQ"><input name="" extensible="true"/></function>
			<empty or="true"/>
			<line/>
			<line/>
			<coil type="reset" name="RISULTATI"/>
		</row>
		<row>
			<empty/>
			<empty/>
			<empty/>
			<empty or="true"/>
			<functionblock position="header" name="zzCTU00000000" type="CTU"/>
			<empty/>
		</row>
		<row>
			<empty/>
			<empty/>
			<empty/>
			<empty or="true"/>
			<functionblock position="top" type="CTU"><input name="CU"/><output name="Q"/></functionblock>
			<empty/>
		</row>
		<row>
			<contact type="open" name="RESET_COUNTER"/>
			<line/>
			<line/>
			<line/>
			<functionblock position="middle" type="CTU"><input name="RESET"/><output name="CV"/></functionblock>
			<analog type="output" name="n_corrette"/>
		</row>
		<row>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
			<functionblock position="bottom" type="CTU"><input name="PV"/></functionblock>
			<empty/>
		</row>
	</network>
	<network label="" comment="Verifichiamo se sono diversi" row="2" column="0" commented="0">
		<row>
			<analog type="input" name="n_kit"/>
			<function position="top" type="NE"><input name="IN1"/><output name="1"/></function>
			<contact type="open" name="RISULTATI"/>
			<coil type="set" name="NON_BUONO"/>
		</row>
		<row>
			<analog type="input" name="n_items"/>
			<function position="bottom" type="NE"><input name="IN2"/></function>
			<empty or="true"/>
			<coil type="reset" name="RISULTATI"/>
		</row>
	</network>
	<network label="" comment="Se è buono muoviamo il nastro trasportatore" row="1" column="0" commented="0">
		<row>
			<contact type="open" name="BUONO"/>
			<contact type="open" name="ON"/>
			<line/>
			<coil type="set" name="MUOVI"/>
		</row>
	</network>
	<network label="" comment="" row="1" column="0" commented="0">
		<row>
			<contact type="open" name="NON_BUONO"/>
			<contact type="open" name="ON"/>
			<line/>
			<coil type="set" name="ATTESA_UTENTE"/>
		</row>
	</network>
	<network label="" comment="" row="3" column="0" commented="0">
		<row>
			<contact type="open" name="ATTESA_UTENTE"/>
			<contact type="open" name="GO"/>
			<line/>
			<coil type="set" name="BUONO"/>
		</row>
		<row>
			<empty/>
			<empty or="true"/>
			<line/>
			<coil type="reset" name="NON_BUONO"/>
		</row>
		<row>
			<empty/>
			<empty or="true"/>
			<line/>
			<coil type="reset" name="ATTESA_UTENTE"/>
		</row>
	</network>
	<network label="" comment="Conteggio Manutenzione" row="4" column="0" commented="0">
		<row>
			<empty/>
			<functionblock position="header" name="zzCTU00000001" type="CTU"/>
			<empty/>
		</row>
		<row>
			<contact type="open" name="ON"/>
			<functionblock position="top" type="CTU"><input name="CU"/><output name="Q"/></functionblock>
			<coil type="set" name="MAN"/>
		</row>
		<row>
			<contact type="open" name="MR"/>
			<functionblock position="middle" type="CTU"><input name="RESET"/><output name="CV"/></functionblock>
			<empty/>
		</row>
		<row>
			<analog type="input" name="n_cicli_man"/>
			<functionblock position="bottom" type="CTU"><input name="PV"/></functionblock>
			<empty/>
		</row>
	</network>
	<network label="" comment="Reset della manutenzione" row="1" column="0" commented="0">
		<row>
			<contact type="open" name="MR"/>
			<line/>
			<line/>
			<coil type="reset" name="MAN"/>
		</row>
	</network>
</networks>
END_PROGRAM



