/*
	Hoang Anh, Pham
	Matrikelnummer: 219204706
	
	Schuemann, Hauke
	Matrikelnummer: 219203901
	
	Albakkar, Muhannad
	Matrikelnummer: 218202908
*/
#include <stdio.h>

int main() {
	int a;
	printf("Nummer eingeben\n");
	scanf("%d", &a);

	if(a == 0 || a == 1) {
		printf("%d",a);
		return 0;
	}

	while(a != 0) {
		printf("%d", a%2); /*non inverted, code for inverted also exists, just go back the revision history*/
		a = a/2;
	}

	return 0;
}