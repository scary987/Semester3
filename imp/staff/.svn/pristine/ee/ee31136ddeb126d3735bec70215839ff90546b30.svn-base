#include <stdio.h>

int fusslaenge;
double schuhgroesse;

schuhgroesse_de() {
	schuhgroesse = (int)((fusslaenge + 1.54)/0.667);
	//printf("Die Schuhgroesse betraegt in Deutschland %.0f, bei einer Fusslaenge von %d cm\n", schuhgroesse, fusslaenge);
}
print_schuhgroesse_de() {
	printf("Die Schuhgroesse betraegt in Deutschland %.0f, bei einer Fusslaenge von %d cm\n", schuhgroesse, fusslaenge);
}


schuhgroesse_eu() {
	schuhgroesse = (int)((fusslaenge + 1.5)*1.5);
	//printf("Die Schuhgroesse betraegt in Europa %.0f, bei einer Fusslaenge von %d cm\n", schuhgroesse, fusslaenge);
}

schuhgroesse_usa() {
	schuhgroesse = (0.5)*(int) (2.0 *((fusslaenge + 1.54)*3/2.54 - 24)); /* Bei Herren, Damen Bitte -23 einsetzen */
	//printf("Die Schuhgroesse betraegt in den USA %.1f, bei einer Fusslaenge von %d cm\n", schuhgroesse, fusslaenge);
}
schuhgroesse_usa_oR() {
	schuhgroesse = (fusslaenge + 1.54)*3/2.54 - 24; /* Bei Herren, Damen Bitte -23 einsetzen */
	printf("Die Schuhgroesse betraegt in den USA %.1f (ohne Runden), bei einer Fusslaenge von %d cm\n", schuhgroesse, fusslaenge);
}
schuhgroesse_usa_Runden_einzeln() {
	schuhgroesse = (fusslaenge + 1.54)*3/2.54 - 24; /* Bei Herren, Damen Bitte -23 einsetzen - Normale Formel*/
	schuhgroesse = 2 * schuhgroesse; // Verdoppeln der Schuhgroesse, Werte ueber .5 erzeugen anderen Wert
	schuhgroesse = (int) schuhgroesse; // Schneide Nachkommastellen ab.
	schuhgroesse = schuhgroesse/ 2; //Dividiere durch 2 oder multipliziere mit 0.5, um ggf korrekt auf 0.5 
	printf("Die Schuhgroesse betraegt in den USA %.1f (mit Runden), bei einer Fusslaenge von %d cm\n", schuhgroesse, fusslaenge);
	/* Beispiel 25 cm fuehrt zu 7.3 ohne runden, 7.3 *2 = 14.6, als int-Wert 14 und nach Division in double damit zu 7.0
	   Beispiel 27 cm fuehrt zu 9.7 ohne runden, 9.7 *2 = 19.4, als int-Wert 19 und nach Division in double damit zu 9.5 */
}


int main() { /* Eingaben und Ausgaben */
	
	double d;
	printf("Eingabe der Fusslaenge in cm\n");
	scanf("%d",&fusslaenge);
	
	schuhgroesse_de();
	printf("Die Schuhgroesse betraegt in Deutschland %.0f, bei einer Fusslaenge von %d cm\n", schuhgroesse, fusslaenge);
	schuhgroesse_eu();
	printf("Die Schuhgroesse betraegt in der EU %.0f, bei einer Fusslaenge von %d cm\n", schuhgroesse, fusslaenge);
	schuhgroesse_usa();
	printf("Die Schuhgroesse betraegt in den USA %.0f, bei einer Fusslaenge von %d cm\n", schuhgroesse, fusslaenge);
	schuhgroesse_usa_oR();
	schuhgroesse_usa_Runden_einzeln();
	//d = 19.0 %6.0;
    printf("\n");
	 fusslaenge = 25;
	printf(" cm\tD\tEU\tUS\n");
	while(fusslaenge < 35) {
		schuhgroesse_de();
		printf(" %d\t%.0f", fusslaenge, schuhgroesse);
		schuhgroesse_eu();
		printf("\t%.0f", schuhgroesse);
		schuhgroesse_usa();
		printf("\t%.1f\n", schuhgroesse);
 		fusslaenge++;
	}
	

}

