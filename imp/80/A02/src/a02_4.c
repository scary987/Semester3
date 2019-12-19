#include <stdio.h>

/* Eine Arbeit von Falk Gottschalk 219201539, Hannes Frank 219203556, Hannes Köhler 218204741 und Maximilian Schley 219203050*/

int main () {
	
	int rest; 
	int dezimal;
	
	printf("Bitte geben Sie eine Dezimalzahl ein:");
	scanf("%d", &dezimal);
	printf("\nDie Binaerzahl Ihrer Zahl lautet:");
	
	while(dezimal !=0) {
		rest = dezimal % 2;
		dezimal = dezimal / 2;
		if(rest>=1) {
			printf("1");
		}
		else{
			printf("0");
		}
	}
	getchar();
	getchar();
}