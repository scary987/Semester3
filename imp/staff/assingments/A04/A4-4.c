#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

/* a..z + SPACE + COLON + STOP */

#define N 29
#define C_SPACE 26
#define C_COLON 27
#define C_STOP  28
#define drand48()( rand()*(1.0 /RAND_MAX	))

char chars[]="abcdefghijklmnopqrstuvwxyz ,.?????";

double Pc_ab[N][N][N]={0}; /* wie wahrscheinlich ist das Triple a b c */
double F_ab[N][N]={0}; /* wie oft tritt das Paar a b nacheinander auf */
double F; /* wie viele Triples verarbeitet */

/* Matrix ausgeben */
void printStatistic(double matrix[N][N][N]) {
    printf("\n");
    int i,j,k;
    for(i=0; i < N; i++) {
        for(j=0; j < N; j++) {
            for(k=0; k < N; k++)
                if(matrix[i][j][k] > 0.0)
                    printf("(%c %c %c)=%lf \n ", 'a'+i, 'a'+j, 'a'+k, matrix[i][j][k]);
        }
    }
    printf("\n");
}

/* einzelnes Zeichen holen und entsprechenden chars[] index zurückgeben */
int getcc() {
	int c, haveSpace = 0;
	while(isspace(c=getchar())) haveSpace = 1;
	if(haveSpace) return (ungetc(c,stdin),C_SPACE);
	else if(c>='a' && c<='z') return c-'a';
	else if(c>='A' && c<='Z') return c-'A';
	else if(c==',') return C_COLON;
	else if(c=='.') return C_STOP;
	else if(c==EOF) return EOF;
	else return getcc();
}

/* Wahrscheinlichkeitsmatrix erstellen  (Erste Teilaufgabe 10 Punkte) 
2 Punkte anlegen der Felder als globale Variablen siehe oben */
void fcount() {
	int a, b, c;

    /* Paare / Triples auf den Variablen a b c ablegen und Kombinationen zählen */
	/* Schleife zum zaehlen der 3er Kombinationen 4 Punkte */
	for(a=getcc(), b=getcc();
		c=getcc(), c!=EOF;
		Pc_ab[a][b][c]++, F_ab[a][b]++, F++, a=b, b=c) ;

	fprintf(stderr,"%f triples collected\n",F);

	for(a=0; a<N; a++)
		for(b=0; b<N; b++)
			if(F_ab[a][b] > 0.0) /* keine Division durch 0 */
                /* Wahrscheinlichkeit für Auftreten eines Triples berechnen
		    Aus Haeufigkeiten der 3er Kombination die Wahrscheinlichkeit berechnen (durch die Gesamtanzahl dividieren hier mit gespeichert 2er Kombinationen) 
		   3 Punkte  */
				for(c=0; c<N;c++) Pc_ab[a][b][c] /= F_ab[a][b];
}

/* Zufallstext mit n Zeichen erzeugen*/
void generate(int n) {
	int a, b, c;
	double s, r;

    for(a=C_STOP, b=C_SPACE; n; a=b, b=c, n--) {

        /* Zeichen mithilfe einer Zufallszahl aus Matrix auswählen*/
		for(s=0, r=drand48(), c=0;
			s += Pc_ab[a][b][c], s<r;
			c++) ;
        /* ausgewähltes Zeichen ausgeben */
		putchar(chars[c]);
	}
}

int main(int argc, char *argv[]) {
	
	fcount();
	//printStatistic(Pc_ab);

	srand(time(NULL));
	/* Länge des zu erzeugenden Zufallstextes als Argument */
	generate(atoi(argv[1]));
	printf("\n");
	return 0;
}

