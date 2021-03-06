/* Sebastian Kaddatz (219203768)    Dennis Stehle (219203998)*/

#include <stdio.h>
#include <stdlib.h>


int test(int a[], int size)
{
    int i, q;
    for(i = 0; i <= size-1; i++)
    {
        for(q = i+1; q <= size-1; q++)
            if(a[i] > a[q]) return 1;
    }
	return 0;
}

void swap(int *a,int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}


int main()
{
    int a[] = {1000, 21, 245476, 48392293, 32, 534 , 235 ,235, 235, 2333};
    int size = sizeof(a)/sizeof(a[0]);
	int loop, p;
	printf("vorher: ");

	for (loop = 0; loop < size; loop++)
        printf("%d ", a[loop]);
    printf("\nGroesse: %d\n", size);

	while(test(a, size))
	{
		for (p=0; p < size-1; p++)
		{
			if (a[p] > a[p+1])
			{
				swap(&a[p], &a[p+1]);
			}
		}
	}
    printf("nachher: ");
	for (loop = 0; loop < size; loop++)
        printf("%d ", a[loop]);

    return 0;
}
