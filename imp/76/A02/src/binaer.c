#include <stdio.h>

/* Es wird angenommen, dass die eingegebene Zahl positiv und ganz ist. */

int main()
{
	int x, y, z;

	printf("Geben Sie ihre Zahl ein.\n");
	scanf("%d", &x);

	while (x != 0 || z < 1000)
	{
		y = x % 2;
		printf("%d", y);

		/* Die If-Schleife prueft, ob es sich bei x um eine gerade Zahl handelt.
		   Ist dem nicht so, wird y durch Subtraktion des "Rest" gerade gemacht. */
		if (y == 0)
		{
			x = x/2;
		}
		else
		{
			x = (x-1)/2;
		}

		z++;
		/* z wurde als letze Reißleine eingebaut, damit dass Programm bei sehr großen Zahlen nicht zulange laeuft. */
	}

	return 0;
}
