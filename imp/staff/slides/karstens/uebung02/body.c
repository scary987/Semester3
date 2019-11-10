#include <stdio.h>

int groesse;
int masse;
int fusslaenge;

schuhgroesse_de() {
	float schuhgroesse = (int)((fusslaenge + 1.54)/0.667);
	printf("Die Schuhgroesse betraegt in Deutschland %f, bei einer Fusslaenge von %d cm\n", schuhgroesse, fusslaenge);
}

schuhgroesse_eu() {
	float schuhgroesse = (int)((fusslaenge + 1.5)*1.5);
	printf("Die Schuhgroesse betraegt in Europa %f, bei einer Fusslaenge von %d cm\n", schuhgroesse, fusslaenge);
}

schuhgroesse_usa() {
	float schuhgroesse = (0.5)*(int) (2.0 *(fusslaenge + 1.54)*3/2.54 - 24); /* Bei Herren, Damen Bitte -23 einsetzen */
	printf("Die Schuhgroesse betraegt in den USA %.1f, bei einer Fusslaenge von %d cm\n", schuhgroesse, fusslaenge);
}

schuhgroesse_uk() {
	float schuhgroesse = (fusslaenge + 1.54)*3/2.54 - 25;
	printf("Die Schuhgroesse betraegt in den USA %.1f, bei einer Fusslaenge von %d cm\n", schuhgroesse, fusslaenge);
}

int main() { /* Eingaben und Ausgaben */
	
	
	printf("Eingabe der Fusslaenge in cm\n");
	scanf("%d",&fusslaenge);
	
	schuhgroesse_de();
	schuhgroesse_eu();
	schuhgroesse_usa();
	schuhgroesse_uk();

	fusslaenge = 25;
	while(fusslaenge < 35) {
		schuhgroesse_de();
		schuhgroesse_eu();
		schuhgroesse_usa();
		schuhgroesse_uk();
 		fusslaenge++;
	}

}

