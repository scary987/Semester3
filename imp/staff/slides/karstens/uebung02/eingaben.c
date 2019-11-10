#include <stdio.h>
int main() { /* Eingaben und Ausgaben */
	int i;  	/* Speicherplatz fuer ein int */
	float f; 	/* Speicherplatz fuer ein float */
	char c; 	/* Speicherplatz fuer ein char */
	char str[80]; 	/* Speicherplatz fuer 80 char */

	printf("Eingabe einer Ganzzahl \n");
	scanf("%d",&i);
	printf("Eingabe einer Floatzahl \n");
	scanf("%f",&f);
	printf("Eingabe Zeichenfolge ohne Leerzeichen \n");
	scanf("%s",str); /* eigentlich &str[0] */
	fflush(stdin); /* Loeschen des Eingabepuffers */
	printf("Eingabe char \n");
	scanf("%c",&c);

	printf("Ausgabe int: %d, float:%f, string: %s, char: %c - Code:%d\n", i, f, str, c, c);	
}

