#include <stdio.h>

main(){
	int a = 2;
	int b = 3.1; // Abschneiden auf 3
	int c = 12;  
	int c1 = 012; // Oktalzahl 12 - Dezimal 10
	int c2 = 0xA; // Hexadezimalzahl A - Dezimal 10
	
	float f = 12.67f; // 12.67f in Floatgenauigkeit
	double d = 14.4; // Double-genauigkeit
	double e = 16;
	printf(" a= %d, b=%d, c=%d, c1=%d, c2=%d, ", a,b, c, c1, c2);
	printf("f=%f, d=%f; e=%f\n", f,d,e);
	e = f;
	f = d;
	f = a;
	b = e;
    printf(" a= %d, b=%d, c=%d, c1=%d, c2=%d, ", a,b, c, c1, c2);
	printf("f=%f, d=%f; e=%f\n", f,d,e);
	
	// Runden
	b = 3.1 + 0.5;
	printf(" Runden von 3.1= %d,",b);
	b = 3.6 + 0.5;
	printf(" Runden von 3.6= %d\n",b);
	
	// Vorsicht
	e = 1.0/3;
	printf(" Berechnung 1/3= %f,",e);
	e = 1/3;
	printf(" Berechnung 1/3= %f\n",e);

}