/*Name, Matrikelnummer: Anna-Sophie Jankowsky, 219200582; Tim Ole Tegler, 219204149; Tobias Wolters, 219203310; Felix Schenk, 219200574 */

#include <stdio.h>
#define PI 3.141592

int main(void){
	int grenze;
	int x;
	int n = 0;
	double sum = 0;
	double z;
	printf("Geben sie eine Grenze fuer die Sinusfunktion ein: ");
	scanf("%d", &grenze);
	printf("Geben sie einen x - Wert in Grad ein: ");
	scanf("%d", &x);
	z = x * PI/180;
	while (n <= grenze){
		double h = 1;
	    double c = 1;
		double b = 1;
		int a;
		while (h <= 2*n+1){
			c = c*h;
		    b = b*z;
			h = h+1;
		}
		if (n % 2 == 0){
		 a = 1;
		}
		else {
		 a = -1;
		}
		
		sum = sum + (a*(b/c));
		
		n = n + 1;
	}
	
	printf("sin(%d)= %.5lf rad",x, sum);
    
	return 0;
}
	
	
	