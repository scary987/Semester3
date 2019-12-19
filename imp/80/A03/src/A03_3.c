#include <stdio.h>
#include <math.h>

int contained(double x, double a, double b){										/* Aufgabe 3a */
	if(a < b){
		if(x>=a && x<=b) {
			return 1;
		}
	}
	else{
		if(x>=b && x<=a) {
			return 1;
		}
	}
	return 0;
}

int line (double x, double y, double px, double py, double qx, double qy){			/* Aufgabe 3b */
	double d;
	d = ((py-qy)/(px-qx))*x-y-((px*py-px*qy)/(px-qx))+py;
	if(fabs(d)< 0.5) {
		return 1;
	}
	return 0;
}

int rectangle (double x, double y, double lx, double uy, double rx, double oy){ 	/* Aufgabe 3c */
	if((fabs(y-oy)<0.5) && contained(x,lx,rx)) {
		return 1;
	}
	if((fabs(x-lx)<0.5) && contained(y,oy,uy)) {
		return 1;
	}
	if((fabs(y-uy)<0.5) && contained(x,lx,rx)) {
		return 1;
	}
	if((fabs(x-rx)<0.5) && contained(y,oy,uy)) {
		return 1;
	}
	return 0;
}


int main(){																	
	int i,j;																		/* Aufgabe 3d */
	for(i=0;i<25;i++){
		for(j=0;j<31;j++){
			if(rectangle(j,i,9,4,12,0)) {
				printf("*");
				continue;
				}
			if(line(j,i,5,4,25,4) && contained(j,5,25) && contained(i,4,4)) {
				printf("*");
				continue;
				}
			if(line(j,i,0,9,5,4) && contained(j,0,5) && contained(i,9,4)) {
				printf("*");
				continue;
				}
			if(line(j,i,25,4,30,9) && contained(j,25,30) && contained(i,4,9)) {
				printf("*");
				continue;
				}
			if(line(j,i,0,9,30,9) && contained(j,0,30) && contained(i,9,9)) {
				printf("*");
				continue;
				}
			if(rectangle(j,i,0,24,30,9)) {
				printf("*");
				continue;
				}
			if(rectangle(j,i,12,24,18,14)) {
				printf("*");
				continue;
				}
			if(rectangle(j,i,3,19,9,12)) {
				printf("*");
				continue;
				}
			if(rectangle(j,i,22,19,27,12)) {
				printf("*");
				continue;
				}
			printf(" ");
		}
		printf("\n");
	}
	return 0;

	}