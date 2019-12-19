#include <stdio.h>
#include <math.h>
#define M_PI 3.14159265
/*
Felix Schenk 219200574
Tim Ole Tegler 219204149
Anna-Sophie Jankowsky 219200582
Tobias Wolters 219203310
*/

void tospace(int indent){
	for(;indent;--indent) putchar(' ');
}



int main(){
	double x=-180.0;
	int a=0,vsin[24], vcos[24];

	for(a=0;a<24;a++){
		vsin[a]=10 + 10*sin((x+a*15)/180.0*M_PI);
		/*printf("%d..",vsin[a]);*/
		}
	for(a=0;a<24;a++){
		vcos[a]=10 + 10*cos((x+a*15)/180.0*M_PI);
		/*printf("%d--",vcos[a]);*/
		}
	for(a=0;a<24;a++){
		if(vsin[a]<vcos[a]){
			tospace(vsin[a]);
			printf("+");/*mitte links*/
			tospace((vcos[a]-vsin[a]));
		    printf("x\n");}/*mitte rechts*/

		else if(vsin[a]==vcos[a]){
			tospace(vsin[a]);
			printf("*\n");	} /*zweite schnittstelle*/

	    else if(vsin[a]>vcos[a]){
			tospace(vcos[a]);
			printf("x"); /*unten links*/
			tospace((vsin[a]-vcos[a]));
		    printf("+\n");} /*unten rechts*/

		}
return 0;

}
