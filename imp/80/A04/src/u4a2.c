#include <stdio.h>
void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

void Sort(int arr[], int n)
{
	int a,b;
	for (a=0;a<n-1;a++)
		for(b=0;b<n-a-1;b++)
			if (arr[b]>arr[b+1])
				swap(&arr[b],&arr[b+1]);
}

void FeldZeichnen(int arr[], int size)
{
		int c;
		for (c=0;c<size; c++)
			printf("%d || ", arr[c]);
		printf("\n");
}
int main()
{
	int arr[] = {55,6,77,56,54,55,57};
	int n = sizeof(arr)/sizeof(arr[0]);
	Sort(arr,n);
	printf( " Sortiertes Feld: \n ");
	FeldZeichnen(arr,n);
	return 0;
}