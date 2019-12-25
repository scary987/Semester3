#include <stdio.h>
#include <stdlib.h>

/*
Aufgabe 2
Name:
	Schuemann, Hauke. Matrikelnr.: 219203901
	Hoang Anh, Pham. Matrikelnr.: 219204706
*/


void swap(int *x, int *y)
{
  int temp=*x;
  *x=*y;
  *y=temp;
}
void sort(int n, int a[])
{
	int i,j;
	for (i=0;i<n-1;i++)
	{
		for (j=i+1;j<n;j++)
		{
			if (a[i] > a[j])
			{
			  swap(&a[i],&a[j]);
			}
		}
	}
}
int main()
{
	int a[1000],n,i;
	printf("Wie viele Zahlen in der Reihenfolge?: ");
	scanf("%d", &n);
	printf("\n%d Zahlen eingeben bitte: ",n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	sort(n,a);
	printf("Die sortierte Reihenfolge: ");
	for (i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}