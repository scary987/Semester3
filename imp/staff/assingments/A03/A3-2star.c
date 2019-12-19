#include <stdio.h>
#include <math.h>

/* Angepasste Funktion aus Vorlesung nach Ausgabe keine automatisches newline */
void star (int indent , char chr) {
	/* Anpassung Ausgabe einer Anzahl von Leerzeichen ohne Newline 2 Punkt */
	for (; indent ;--indent ) 
		putchar (' ');
	putchar(chr);
}

int main () {
	double x;
	int ysin, ycos;
	int offset, scale;
	offset=scale=10; /* Sinnvolle Werte fuer Verschiebung 0-Linie und Skalierung 1 Punkt */
	for(x = -180.0;x <=180.0; x +=15.0) {
		/* 2 Punkte fuer Berechnung der Anzahl der Leerzeichen fuer jeden Funktionswert */
		ysin=sin(x/180.0*M_PI) *scale + offset;
		ycos=cos(x/180.0*M_PI) *scale + offset;
		/* richtige Stelle fuer Newline finden 2 Punkt */
		if(ysin==ycos) { /* Test auf gleiche Werte sin == cos 2 Punkte */
			star(ysin,'*'); printf("\n");}
			else if( ysin < ycos) { /* Erst sin dann cos 2 Punkt */ 
			    /* beruecksichtigen der Differenz zwischen den Funktionswerten je 3 Punkte fuer then und else */
				star(ysin,'+'); star(ycos-ysin,'x'); printf("\n");}
				else { /* Erst cos dann sin 1 Punkt */ 
				star(ycos,'x'); star(ysin-ycos,'+'); printf("\n");}
	}
	return 0;
}