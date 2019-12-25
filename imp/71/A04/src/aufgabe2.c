#include <stdio.h>
#define max 100000
void swap ( int *a , int *b )
	{
	int tmp = *a ;
	*a = *b ;
	*b = tmp ;
	}

void sort(int n, int* ptr)
{
    int i,j;
    printf("Sorted array :" );
    for (i = 0; i < n; i++) {

        for (j = i + 1; j < n; j++) {

            if (*(ptr + j) < *(ptr + i)) {

                swap(ptr + j,ptr + i);
            }
        }
    }

    for (i = 0; i < n; i++)
        printf(" %d ", *(ptr + i));
}

int main()
{
    int n ,i;
	int arr1[max] ;

    printf("die lange des felds\n");
    scanf("%d", &n );




    printf("Schreiben sie die Elemente\n");
    for(i=0;i<n;i++){
        scanf("%d", &arr1[i] );
    }
    sort(n, arr1);

    return 0;
}
