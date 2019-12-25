#include <stdio.h>
#include <ctype.h>

/*This puts the chances into a three dimensional array.*/

/*Keep these two updated.*/
#define N 29
#define NSQUARE 841
#define C_SPACE 26
#define C_COMMA 27
#define C_STOP 28

int getcc() {
	int c, haveSpace = 0;

	while(isspace(c=getchar())) haveSpace = 1;

	if(haveSpace) {
		return (ungetc(c,stdin),C_SPACE);
	}
	if(c>='a' && c<='z') {
		return c-'a';
	}
	if(c>='A' && c<='Z') {
		return c-'A';
	}
	if(c==',') {
		return C_COMMA;
	}
	if(c=='.') {
		return C_STOP;
	}
	if(c==EOF) {
		return EOF;
	}
	return getcc();
}

char cctochar(int ic) {
	switch(ic) {
		case C_SPACE: return ' ';
		case C_COMMA: return ',';
		case C_STOP: return '.';
	}
	return ic + 'a';
}

/*Prints the chances from this character in a table. Printing chances for everything is a tad to big for my taste.*/
void printOutputFor(float chances[N][N][N], int chara) {
	int ii, iii;
	for(ii = 0; ii < N; ii++) {
		for(iii = 0; iii < N; iii++) {
			if( !chances[0][ii][iii]) continue;
			printf("C: %d | ", chara);
			printf(".%d|%d.", ii, iii);
			printf(" :: %f\n", chances[0][ii][iii]);
		}
	}
}

int main() {
	float chances[N][N][N];
	int total[N][N];
	int current, last, lastlast;
	int ii, io, iii;
	for(io = 0; io < N; io++) {
		for(ii = 0; ii < N; ii++) {
			total[io][ii] = 0;
			for(iii = 0; iii < N; iii++) {
				chances[io][ii][iii] = 0;
			}
		}
	}
	lastlast = getcc();
	last = getcc();
	current = getcc();
	if(lastlast == EOF || last == EOF || current == EOF) {
		return 0;
	}
	while(1) {
		total[current][last]++;

		chances[lastlast][last][current]++;

		lastlast = last;
		last = current;
		current = getcc();
		if(current == EOF) {
			break;
		}
	}

	for(io = 0; io < N; io++) {
		for(ii = 0; ii < N; ii++) {
			for(iii = 0; iii < N; iii++) {
				chances[io][ii][iii] = chances[io][ii][iii] / total[io][ii];
			}
		}
	}
	printOutputFor(chances, 0);
	for(io = 0; io <29; io++)
	printf("%d ", total[0][io]);
	return 0;
}
