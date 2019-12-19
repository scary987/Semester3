#include <stdio.h>
#include <math.h>


int main () {
	double x;
	int ysin, ycos, i;
	for(x = -180.0;x <=180.0; x +=15.0) {
		/* 3 Punkte fuer Berechnung der Anzahl der Leerzeichen fuer jeden Funktionswert mit sinnvoller Skalierung und Verschiebung */
		ysin=sin(x/180.0*M_PI) *10 + 10;  /* Sinnvolle Werte fuer Verschiebung 0-Linie und Skalierung*/
		ycos=cos(x/180.0*M_PI) *10 + 10;
		/* Ausgabe einer Zeile fuer jede Stelle wird Entscheidung getroffen  4 Punkte oder Differenzenbildung nach Ausgabe erster Wert */
		for(i = 0; i <=20; i++){
			if(i==ysin && i==ycos) /*  Test auf Sonderbehandlung gleiche Werte  2 Punkt */
				putchar('*');
			 else if( i== ysin) /*  Test auf sin  2 Punkt */
						putchar('+');
					else if( i== ycos) /*  Test cos   2 Punkt */
							putchar('x');
						else 
							putchar(' '); /* Ausgabe eines Leerzeichen 1 Punkt */
				
		}	
		/* Ausgabe einer  Newline am Ende der Zeile 1 Punkt */
		printf("\n"); /* oder putchar('\n'); */
	}
	return 0;
}