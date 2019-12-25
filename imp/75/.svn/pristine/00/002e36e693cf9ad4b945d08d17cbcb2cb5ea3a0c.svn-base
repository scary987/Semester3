#include <stdio.h>
#include <stdlib.h>

#define MAGIC_ARR_SIZE 5

/*This is basically pickweight(). Second part of exercise 4.*/

/*I'm not *quite* sure why I have to do this with doubles. For the thing that is asked, ints would be enough.*/
int main() {
	/*Array Initialization*/
	double arr[MAGIC_ARR_SIZE] = {200.0,6.0,8.0,4.0,2.0}; /*Adjust these for different results. Currently heavily weighted more easier to spot results.*/
	double drand, dcomp;
	int scannies;
	int i, i_2, count;
	count = 0;
	for(i = 0; i < MAGIC_ARR_SIZE; i++) {
		count += arr[i];
	}
	if(count == 0) {
		printf("Not enough data.");
		return 0;
	}
	for(i = 0; i < MAGIC_ARR_SIZE; i++) {
		arr[i] /= count;
		printf("%f\n",arr[i]);
	}
	/*Now the sum of arr should be in close proximity of 1.*/
	
	/*This is where the actual die throwing begins.*/
	printf("Enter Seed\n");
	scanf("%d", &scannies);
	for(i_2 = 0; i_2 < 20; i_2++) {
		dcomp = 0;
		srand((unsigned) scannies); /*Initialize rand*/
		scannies *= scannies; /*TrUe RaNdOmNeSs*/
		drand = (double) rand() / RAND_MAX; /*generate a random number between*/
		for(i = 0; i < MAGIC_ARR_SIZE; i++) {
			dcomp += arr[i];
			if(dcomp > drand) {
				printf("%d\n", i);
				break;
			}
		}
	}
	return 0;
}

