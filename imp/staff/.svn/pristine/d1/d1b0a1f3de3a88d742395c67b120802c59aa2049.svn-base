#include <stdio.h>

int groesse;
int masse;

bmi() {
	int bmi;
	float g = groesse/100.;
	bmi = masse/(g*g);
	printf("Der BMI betraegt  %d\n", bmi);
}

bmi_fehler() {
	int bmi;
	float g = groesse/100;
	bmi = masse/(g*g);
	printf("Der BMI betraegt  %d\n", bmi);
}

int main() { /* Eingaben und Ausgaben siehe Folie */
	
	printf("Eingabe der Koerpergroesse in cm\n");
	scanf("%d",&groesse);
	printf("Eingabe der Koerpermasse in kg\n");
	scanf("%d",&masse);
	
	bmi();
	bmi_fehler();

}

