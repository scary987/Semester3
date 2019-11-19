#include <stdio.h>

int main()
{
	float a, b;
	
	while (a != 0)
	{
		printf("Bitte geben Sie einen Betrag in Euro ein (Abbruch in 0): \n");
		scanf("%f", &a);
		
		b = a + (a * 0.1);
		printf("Der Betrag entspricht %f USD \n", b);
		
	}
	
	return 0;
	
}