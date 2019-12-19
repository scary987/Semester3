#include <stdio.h>
#include <math.h>
 
void plotsin(int indentsin, char chr) {
	for(;indentsin>0;--indentsin) putchar(' ');
	printf("%c" ,chr);
}
 
void plotcos(int indentcos, char chr) {
	for(;indentcos>0;--indentcos) putchar(' ');
	printf("%c" ,chr);
}
 
 
int main(){
 
	int indentsin;
	int indentcos;
	double x;
 
	for(x=-180.0;x<=180.0;x+=15.0){
		indentsin = 20+10*sin(x/180.0*M_PI);
		indentcos = 20+10*cos(x/180.0*M_PI);
 
		if (indentsin<indentcos) {
			plotsin (indentsin, '+');
			plotcos (indentcos-indentsin, 'x');
			printf ("\n");
		}
 
		if (indentcos<indentsin) {
			plotcos (indentcos, 'x');
			plotsin (indentsin-indentcos, '+');
			printf("\n");
		}
 
		if (indentsin == indentcos) {
			plotsin (indentsin, '*');
			printf ("\n");
		}
	}
	return 0;
}