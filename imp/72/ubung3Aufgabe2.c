#include <stdio.h>
#include <stdlib.h>


void swap ( int *a , int *b )
	{
	int tmp = *a ;
	*a = *b ;
	*b = tmp ;
	}

int main(int argc, char* argv[])
{
	int i;

	int n;
	if( argc < 2 || (n = atoi (argv [1])) < 0)
	{
		printf ("Usage : %s <Enter the number of the array> \n",argv [0]);
		return -1;
	}

	int *a = (int*) malloc(sizeof(int) * n);


	printf("Enter the numbers: \n");

	for(i = 0; i < n; i++)
	{
		scanf("%d", a + i);
	}

	for(i = 0; i < n; i++)
	{
		for(int j = 0; j < n - 1; j++)
		{
			if(a[j] > a[j + 1])
			{
				swap(&a[j], &a[j+1]);
			}
		}
	}

	printf("Sorted numbers: ");

	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}

	printf("\r\n");

	return 0;
}
