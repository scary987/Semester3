#include <stdio.h>

main() {

	printf("H\ta\tl\tl\to\nW\ne\nl\nt\n");
	printf("Ausgabe von \"\\\"\n");
	
	printf("Die Zahlen %d, %d und %f\n", 9, -9, 16.25);
	printf("Die Zahlen %10d, %10d und %14f\n", 9, -9, 16.25);
	printf("Die Zahlen %-10d, %-10d und %-14f\n", 9, -9, 16.25);
	printf("Die Zahlen %10.4d, %10.4d und %14.3f\n", 9, -9,  16.25);
	printf("Die Zahlen %+d, %+d und %+14.3f\n", 9, -9, 16.25);
	}