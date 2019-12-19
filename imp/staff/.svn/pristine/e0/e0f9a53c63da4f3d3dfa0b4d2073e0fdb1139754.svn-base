#include <stdio.h>
#include <math.h>

/* Angepasste Funktion aus Vorlesung nach Ausgabe keine automatisches newline */
void star (int indent , char chr) {
	for (; indent ;--indent ) 
		putchar (' ');
	putchar(chr);
}

int main () {
	double x;
	int ysin, ycos;
	int offset, scale;
	offset=scale=10;
	for(x = -180.0;x <=180.0; x +=15.0) {
		ysin=sin(x/180.0*M_PI) *scale + offset;
		ycos=cos(x/180.0*M_PI) *scale + offset;
		if(ysin==ycos) {
			star(ysin,'*'); printf("\n");}
			else if( ysin < ycos) {
				star(ysin,'+'); star(ycos-ysin,'x'); printf("\n");}
				else {
				star(ycos,'x'); star(ysin-ycos,'+'); printf("\n");}
	}
	return 0;
}