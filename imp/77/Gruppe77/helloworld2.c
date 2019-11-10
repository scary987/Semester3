#include <stdio.h>

int main() {
	char name[25];						/* Definition der Variable "name" mit der Begrenzung von 25 Zeichen*/
	
	printf("Wie lautet dein Vorname? \n");
	scanf("%s", name); 					/* eingabe wird in "name" gespeichert?*/
	printf("Hallo %s!", name);
	return 0;							/* "Rückgabeaufforderung" erfüllen */
}