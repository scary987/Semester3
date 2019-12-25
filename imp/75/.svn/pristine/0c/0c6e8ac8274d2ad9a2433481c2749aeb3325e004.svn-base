#include <stdio.h>
#include <ctype.h>
#define ALPHLEN 26

/*
Aufgabe 2
Name:
	Schuemann, Hauke. Matrikelnr.: 219203901
	Hoang Anh, Pham. Matrikelnr.: 219204706
*/

void swapChars(char *a, char *b) {
	char c;
	c = *a;
	*a = *b;
	*b = c;
}

void generate(int amt, char alph[], int output, int *count) {
	int i; /*loop index*/
	/*Prints the array if needed.*/
	if(amt == 1) {
		(*count)++;
		printf("%d:", *count);
		for(i = 0; i < output; i++) {
			printf("%c", alph[i]);
		}
		printf("\n");
		return;
	}
	/*I sure love recursion*/
	generate(amt - 1, alph, output, count);
	for(i = 0; i < amt - 1; i++) {
		if(!(amt % 2)) {
			swapChars(&alph[i], &alph[amt - 1]);
		} else {
			swapChars(&alph[0], &alph[amt - 1]);
		}
		generate(amt - 1, alph, output, count);
	}
}

int main(int argc, char *argv[]) {
	int i; /*loop index*/
	int num; /*input*/
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"; /*the alphabet duh*/
	int count; /*counts up the number of permutations*/
	if(argc != 2) {
		printf("Invalid amount of arguments.");
		return 0;
	}
	num = 0;
	for(i = 0; isdigit(argv[1][i]); i++) {
		num *= 10;
		num += argv[1][i] - '0';
	}
	if(num < 1) {
		printf("Argument is too small.");
		return 0;
	}
	if(num > ALPHLEN) {
		printf("Argument is too large.");
		return 0;
	}
	printf("Input: %d\n", num);
	count = 0;
	generate(num, alpha, num, &count);
	printf("%d Permutations.", count);
	return 0;
}
