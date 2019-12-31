/* Norbert Scheffler			219202871
   Luca Ziesemer				219201733
   Joost Rehder				    219202865
   Tim Apelt					219203222 */


#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>


int adr(int c)
{
	int p = 0;

	if (c >= 97 && c <= 122)
	{
		p = c - 97;			/* KLEIN */
	}

	else if (c >= 65 && c <= 90)
	{
		p = c - 65;			/* GROSS */
	}

	else if (c == 46)
	{
		p = 26;				/* PUNKT */
	}

	else if (c == 44)
	{
		p = 27;				/* KOMMA */
	}

	else if (isspace(c) != 0)
	{
		p = 28;				/* WHITESPACE */
	}

	else if (c == EOF)
	{
		p = -1;				/* END OF FILE */
	}

	else p = -2;


	return p;
}

int chr(int i)
{
	int c = 0;

	if (i <= 25)
	{
		c = i + 97;
	}

	else if (i == 26)
	{
		c = 46;
	}

	else if (i == 27)
	{
		c = 44;
	}

	else if (i == 28)
	{
		c = ' ';
	}

	return c;

}

int speak(int a, int b, int p[29][29][29], int l)
{
	int g = 0, d = 0, i;
	int z = 0;
	int c = 0;

	for(d = l; d >= 0; d--)
	{

		g = 0;

		for (i = 0; i < 29; i++)
		{
			g = g + p[adr(a)][adr(b)][i];
		}

		z = rand() % (g+1);

		for (i = 0; z > 0 ; ++i)
		{
			z = z - p[adr(a)][adr(b)][i];
		}

		if (g == 1)
		{
			i = rand() % 29;
		}

		if (i > 0)
		{
			i--;
		}

		c = chr(i);

		printf("%c", c );


		a = b;
		b = c;
		c = 0;

	}

	printf(".\n");

	return 0;

}


int main()
{

	int p[29][29][29];
	int a = 0, b = 0, c = 0;

	int n1 = 0, n2 = 0, n3 = 0;
	int v = 0;

	for(n3 = 0; n3 != 29; n1 = 0, n2 = 0, n3++)
	{
		for(n2 = 0; n2 != 29; n1 = 0, n2++)
		{
			for(n1 = 0; n1 != 29; n1++)
			{
				p[n3][n2][n1] = v;
			}
		}
	}


	while(adr(a) == -2)
			a = getchar();

	while(adr(b) == -2)
			b = getchar();

	while(adr(c) == -2)
			c = getchar();

	while(a != EOF && b != EOF && c != EOF)
	{
		p[adr(a)][adr(b)][adr(c)]++;

		a = 0;
		while(adr(a) == -2)
			a = getchar();

		if (adr(a) == -1)
		{
			break;
		}

		p[adr(b)][adr(c)][adr(a)]++;

		b = 0;
		while(adr(b) == -2)
			b = getchar();

		if (adr(b) == -1)
		{
			break;
		}

		p[adr(c)][adr(a)][adr(b)]++;

		c = 0;
		while(adr(c) == -2)
			c = getchar();

		if (adr(c) == -1)
		{
			break;
		}
	}

	srand(time(NULL));

	a = '.';
	b = ' ';
	c = 0;


	printf("\n");

	speak(a,b,p,500);
  speak(a,b,p,50000);


	return 0;
}
