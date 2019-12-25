/*
Aufgabe 2
Name:
	Schuemann, Hauke. Matrikelnr.: 219203901
	Hoang Anh, Pham. Matrikelnr.: 219204706
*/

/*This thingy produces random "english" text. You have to feed it a english text for that though...*/

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>


/*Keep these two updated.*/
#define N 29
#define NSQUARE 841
#define C_SPACE 26
#define C_COMMA 27
#define C_STOP 28

#define SEED 873541384
/*Gets the key for a certain char.*/
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

/*Gets the char for a certain key.*/
char cctochar(int ic) {
	switch(ic) {
		case C_SPACE: return ' ';
		case C_COMMA: return ',';
		case C_STOP: return '.';
	}
	return ic + 'a';
}

void calculateChances(double chances[N][N][N]) {
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
		return;
	}
	while(1) {
		total[last][current]++;
		
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
}

/*Takes an array of doubles (which have the sum 1) and picks the position weighted by that positions value.*/
double pickDouble(double chances[], int len) {
	int i;
	double cmp = 0;
	double crnd = rand();
	crnd /= RAND_MAX;

	for(i = 0; i < len; i++) {
		cmp += chances[i];
		if(cmp > crnd) {
			return i;
		}
	}
	return C_SPACE; /*This is required so in case the combination does not exist we don't spam a bunch of 'a's*/
}



int main() {
	double chances[N][N][N];
	int m, lastlast, last, new;
	srand((unsigned) SEED);
	calculateChances(chances);
	m = 0;
	/*Gonna run for a LOOONG time*/
	lastlast = C_STOP;
	last = C_SPACE;
	while(m < 10000) {
		new = pickDouble(chances[lastlast][last], N);
		if(!(new == C_SPACE && last == C_SPACE)) {
			printf("%c", cctochar(new));
		}
		lastlast = last;
		last = new;
		m++;
	}
	return 0;
}
