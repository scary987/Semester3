#include <stdio.h>

int main() {
	
	int n, n1;
	printf("Zahl? ");
	scanf("%d", &n); // 1 Punkt fuer korrektes Einlesen
	printf("%d[10] = ", n);
	
	while (n > 0) { // 3 Punkte fuer korrekt terminierende Schleife
		n1 = n / 2;
		printf("%d",n - 2 * n1); // 2 Punkte fuer korrekte zeichenweise Ausgabe
		n = n1;
	}
	
	printf("[2]\n");
	
	return 0;	
}
 
// 4 Punkte fuer korrekt arbeitendes Programm


// Alternative Schleife mit Operator % (in der VL bislang nicht besprochen)
//	while (n > 0) {
//		printf("%d", n % 2); 
//		n = n / 2;
//	}

// Alternative korrekte Reihenfolge
//	int n, j, p;
//	printf("Zahl? ");
//	scanf("%d",&n);
//	printf("\n");
//	for (j = 0, p=1; j <= sizeof n; j++) // hoechste Potenz bestimmen 2 hoch 31
//		p = p * 64;
	
//	while (p>0) { // solange nicht alle 32 Binaerziffern konvertiert
//		if (n / p > 0) { // Division durch aktuelle Zweipotenz ist groesser 0
//			printf("1");
//			n = n - p; // subtrahiere diese Potenz von n
//		}
//		else printf("0");
//		p = p/2; // teste naechste kleinere Zweierpotenz
//	}
//	printf("[2]\n");
//	}
