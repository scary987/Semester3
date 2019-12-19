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
	float euro,usd;
	while(1) {
		printf("\nBitte geben Sie einen Betrag in Euro ein (Abbruch mit 0) ");
		scanf("%f", &euro);
		if(euro == 0) {
			break;
		}
		usd=euro*1.1;
		printf("Der Betrag entspricht %0.2f USD\n",usd);
	}
	return 0;
}