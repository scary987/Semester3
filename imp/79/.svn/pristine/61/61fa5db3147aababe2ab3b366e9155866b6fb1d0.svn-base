/*Name, Matrikelnummer: Anna-Sophie Jankowsky, 219200582;
						Tim Ole Tegler, 219204149;
						Tobias Wolters, 219203310;
						Felix Schenk, 219200574 */

#include <stdio.h>
#include <stdlib.h>


void swap (int *a, int *b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void permutation(int n, int chr[26],int max){
	int i;
	if (n == 1){
		for(i=0;i<max;i++){
		putchar(65+chr[i]);}
	printf("\n");}
	else {
		permutation(n-1,chr,max);
		for(i=0;i<n-1;i++){
			if(n%2 == 0) {swap(&chr[i],&chr[n-1]);}
			else {swap(&chr[0],&chr[n-1]);}
		permutation(n-1,chr,max);}
	}
}

int main (int argc, char *argv[]){
	int n,i;
	int d = 1;
	int chr[26];
	if (argc < 2 || (n = atoi(argv[1])) < 0){
		printf("**Aufruffehler**");
		return -1;
	};
	for(i = 1; i <= n;i++){
		d = d * i;
	}
	for(i=0;i<26;i++){
	chr[i]=i;};
	permutation(n,chr,n);
	printf("%d Permutationen",d);
	return 0;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	