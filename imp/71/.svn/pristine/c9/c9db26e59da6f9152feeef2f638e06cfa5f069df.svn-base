#include <stdio.h>
#include <stdlib.h>

void swap (char *x, char *y)
{
	char temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
int nm = 0;

void permute(char *a, int i, int n)
{
	int j;
	if (i == n)
    printf("%d: %s\n", ++nm, a);

	else
	{
		for (j = i; j <= n; j++)
		{
		swap((a+i), (a+j));
		permute(a, i+1, n);
		swap((a+i), (a+j));
		}
	}
}

int main (int argc , char *argv [])
{
	int n,l,i=0;
	char *a;
	if( argc < 2 || (n = atoi ( argv [1])) < 0)
	{
		printf ("Usage : %s <Nutzen n als Kommandozeilenargument> \n",argv [0]);
		return -1;
	}
	if(n > 26)
	{
		printf ("Anzahl der Elementen muss weniger als 26 sein \n");
		return -1;
	}
	a = (char*)malloc(n + 1);
	a[n] = '\0';
	for ( l = 0; l < n; l++)
	{
		a[l] = 'A' + l;
	}


	permute(a, i, n-1);
	printf("%d permutations", nm);
	getchar();
	return 0;
}
