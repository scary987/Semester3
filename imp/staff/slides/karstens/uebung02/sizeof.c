#include <stdio.h>
main() { /* Beispiel Vorlesungsfolie 17 + Erweiterung */
	char a; short b; int c;
	long d; float e; double f;
	long long g; long double h;	
	printf("Size(char) = %d\n", sizeof a);
	printf("Size(short) = %d\n", sizeof b);
	printf("Size(int) = %d\n", sizeof c);
	printf("Size(long) = %d\n", sizeof d);
	printf("Size(float) = %d\n", sizeof e);
	printf("Size(double) = %d\n", sizeof f);
	printf("Size(long long) = %d\n", sizeof g);
	printf("Size(long double) = %d\n", sizeof h);


	e = 2.4f;
	c =(int)e;
	b = 4;
	printf("e = %f\n", e); /* Gibt 2.4 aus! */
	printf("e = %d\n", e); /* gibt unsinnige Zahl aus, da kein int */
	printf("e = %d\n", (int)e); /* gibt 2 aus */
	printf("c = %d\n", c); /* Gibt 2 aus */
	printf("c = %f\n", c); 
	printf("b = %d\n", b);
	printf("e + b = %f\n", e+b);
	printf("e + b = %d\n", (int)e+b);
}
