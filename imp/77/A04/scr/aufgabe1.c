/* Sebastian Kaddatz (219203768)    Dennis Stehle (219203998)*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int permutec(int x){
	if(x > 1) {
		return x * permutec(x-1);
	}
	else{
		return 1;
	}
}

void swap(char *x, char *y){
	char temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

void permute(char *a, int l, int r){
	int i;
	if (l == r){
		printf("%s\n", a);
	}
	else{
		for (i = l; i <= r; i++){
			swap((a + l), (a + i));
			permute(a, l + 1, r);
			swap((a + l), (a + i));

		}
	}
}

int main(int argc, char *argv[]){
    char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ziel[26];
	int laenge = atoi(argv[1]);

	strncpy(ziel, alphabet, laenge+1);
	ziel[laenge] = '\0';

	permute(ziel, 0, laenge-1);
	printf("%d permutations", permutec(laenge));

    return 0;
}
