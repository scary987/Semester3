#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

/* a..z + SPACE + COLON + STOP*/
#define N 31
#define C_SPACE 26
#define C_COMMA 27
#define C_STOP 28
#define C_EXCLAMATION 29
#define C_QUESTION 30
#define drand48()( rand()*(1.0 /RAND_MAX	))

char chars[] = "abcdefghijklmnopqrstuvwxyz ,.!?:;";
double Pc_ab[N][N][N] = {0};
double F_ab[N][N]={0};
double F;

int possiblechar(int c) { /* gueltige Zeichen des Alphabetes */
	if(isalpha(c)||c=='.'||c==','||c=='!'||c=='?'||c==' ')
	 return 1 ;
	else return 0;
}
int getcc() { /* ein Zeichen des Alphabetes einlesen, ungueltige Zeichenfolgen durch ein Leerzeichen ersetzt */
	int c, anz = 0;
	while (((c = getchar()) != EOF) && (!possiblechar(c))) {
		anz++;
	}
	/*
	if (anz > 0) { // letztes Zeichen (ist gueltig) zurueckschieben
		ungetc(c, stdin); 
		return C_SPACE; // Ein Leerzeichen zaehlen
	} else { 
	*/
	/*  gueltige Zeichen auswerten */
			if (c >= 'a'&&c <= 'z') return c - 'a';
			else if (c >= 'A'&&c <= 'Z')return c - 'A';
			else if (c == ' ') return C_SPACE;
			else if (c == ',') return C_COMMA;
			else if (c == '.') return C_STOP;
			else if (c == '!') return C_EXCLAMATION;
			else if (c == '?') return C_QUESTION;
	/*	} */
	return EOF; // war wohl EOF
}


void fcount() {
	int a, b, c;
	a = getcc();
	b = getcc();
	for (c = getcc(); c != EOF; c = getcc()) {
		Pc_ab[a][b][c]++;
		F_ab[a][b]++;
		F++;
		a = b;
		b = c;
	}
	printf("%ftriples collected \n", F);
	// Jetzt Berechnung relativer Haeufigkeiten Ha Teil 1
	for (a = 0; a<N; a++)
		for (b = 0; b<N; b++)
			if (F_ab[a][b] > 0.0) {
				//Es gibt unmoegliche Kombinationen
				//printf(" Mit %c und %c gibt es keine 3 Kombinationitionen!\n", a, b);
				for (c = 0; c < N; c++)
					Pc_ab[a][b][c] /= F_ab[a][b]; /* Bedingte Wahrscheinlichkeit auf 2-er Buchstabenfolge folgt eines der Zeichen des Alphabetes */
			}
}
int maxIndex( double *f){ /* war in Uebung behandelt */
	int i, k;
	double m = f[0];
	k = 0;
	for(i=0; i<N;i++){
		//printf("i: %d = %f\n", i, f[i]);
		if(f[i]>m) {
			m = f[i];
			k = i;
		}
	}
	//printf("k: %d = %f\n", k, f[k]);
	return k;
	
}

void generate(int n) {
	int a, b, c, k, i;
	double max;
	int p = 0;
	double s, r;
	for (a = C_STOP, b = C_SPACE; n >= 0; a = b, b = c, n--) {
		p = 0;
		// Zufaelliger Startwert fuer c und c Modulo Alpbetlaenge (N)
		for (s = 0, r = drand48(), c = rand()%N, max = Pc_ab[a][b][c], i=c; s<r; c=(c+1)%N) {
		//for (s = 0, r = drand48(), c = 0; s += Pc_ab[a][b][c],s<r; c++)	{
				s += Pc_ab[a][b][c]; // Aufsummieren der Werte bis Wahrscheinlichkeit erreicht
				if (Pc_ab[a][b][c]>max){ // Bestimmen des Buchstabens mit max Anteil, liefert aber auch keine besseren Texte
					max = Pc_ab[a][b][c];
					i = c; // Index des Maximums
				}
		}
		c = i; // nehme den Buchstaben mit max Anteil
		putchar(chars[c]);
	}
}

int main(int argc, char** argv)
{
	srand(time(NULL));
	rand();
	rand();
	char cc;
	fcount();
	generate(atoi(argv[1]));
	//generate(50); //Zeichen
	fflush(stdin);
	cc = getchar();
	return 0;
}
