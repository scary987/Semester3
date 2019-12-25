/*Name, Matrikelnummer: Anna-Sophie Jankowsky, 219200582;
						Tim Ole Tegler, 219204149;
						Tobias Wolters, 219203310;
						Felix Schenk, 219200574 */

#include <stdio.h>
#define array_max 5

void swap (int *a, int *b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int sortiert (int arr[array_max]){
	int i;
	int a = 1;
	for(i = 0;i < array_max-1;i++){
		if (arr[i] < arr[i+1])a = a * 1; 
			else a = a * 0;
	}
	return a;
}
			

int main (){
	int arr[array_max] = {4,2,3,1,5};
	int i = 0;
	printf("Array unsortiert: ");
	for(i = 0;i < array_max;i++){
		printf("%d, ",arr[i]);
	}
	i = 0;
	while (i < array_max - 1){
		if (arr[i] < arr[i+1])i++;
		else swap(&arr[i],&arr[i+1]);
		if (sortiert (arr))break;
		if (i == array_max - 1)i = 0;
	}
	printf("Array sortiert: ");
	for(i = 0;i < array_max;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}