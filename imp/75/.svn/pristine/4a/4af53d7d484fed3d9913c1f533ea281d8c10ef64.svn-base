#include <stdio.h>
#include <math.h> /* for sin (x) */
#define M_PI 3.14159265359 /* M_PI isn't in math.h with -ansi flag. Now this is epic*/

/*
Aufgabe 2
Name: Schuemann, Hauke. Matrikelnr.: 219203901
	Hoang Anh, Pham. Matrikelnr.: 219204706
*/

void drawIndent(int indent, char c) {
	for(;indent;--indent){
		printf(" ");
	}
	printf("%c", c);
}

int main () {
	double x;
	int indent1, indent2;
	for(x = -180.0;x <=360.0;x +=15.0){
		/* compute value */
		indent1 = 10 + 10*sin(x/180.0*M_PI);
		indent2 = 10 + 10*cos(x/180.0*M_PI);
		printf("\n\n      ");

		if(indent2 == indent1) {
			drawIndent(indent1, '*');
			continue;
		}
		if(indent1 < indent2) {
			drawIndent(indent1, 'x');
			drawIndent(indent2 - indent1 - 1, '+');
		} else {
			drawIndent(indent2, '+');
			drawIndent(indent1 - indent2 - 1, 'x');
		}
	}
	printf("\n");
	return 0;
}
