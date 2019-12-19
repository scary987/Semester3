#include <stdio.h>
#include <math.h>
#define TRUE 1
#define FALSE 0
#define SCREENSIZE 32

/*
This one also contains the solutions to all the other ones.

Aufgabe 3d
Name: Schuemann, Hauke. Matrikelnr.: 219203901
	Hoang Anh, Pham. Matrikelnr.: 219204706
*/

int contained(double a, double b, double c) {
	return (a >= b && a <= c) || (a >= c && a <= b);
}

int isClose(double x1, double y1, double x2, double y2, double dist) {
	return sqrt(pow(x1-x2,2) + pow(y1-y2,2)) < dist;
}

int line(double x, double y, double px, double py, double qx, double qy) {
	double x0; /*x Stelle des Schnittpunktes*/
	double y0; /*y Stelle des Schnittpunktes*/
	double a; /*Anstieg der Geraden die durch P und Q laeuft*/
	double b;
	double a1; /*Anstieg der Geraden senkrecht zu PQ laeuft*/
	double b1;
	if(isClose(x,y,px,py,0.5) || isClose(x,y,qx,qy,0.5)) {
		return TRUE;
	}
	/*Edge cases*/
	if(px == qx) {
		return contained(y, py, qy) && fabs(px -x) < 0.5;
	}
	if(py == qy) {
		return contained(x, px, qx) && fabs(py -y) < 0.5;
	}
	a = (py-qy)/(px-qx);
	a1 = -1/a;
	b = py - a * px;
	b1 = y - a1 * x;
	x0 = (b - b1)/(a1 - a);
	y0 = a * x0 + b;
	return contained(x0, px, qx) && contained(y0, py, qy) && isClose(x, y, x0, y0, 0.5);
}

int rectangle(double x, double y, double lx, double uy, double rx, double oy) {
	return line(x,y,lx,uy,lx,oy) || line(x,y,lx,uy,rx,uy) || line(x,y,lx,oy,rx,oy) || line(x,y,rx,uy,rx,oy);
}

/* What is Object Oriented Programming*/
int checkContainment(int x, int y) {
	if(rectangle(x, y, 15, 0, 31, 31)) { /*House body*/
		return TRUE;
	}
	if(rectangle(x, y, 22, 12, 31, 18)) { /*Door*/
		return TRUE;
	}
	if(rectangle(x, y, 18, 3, 27, 8)) { /*left window*/
		return TRUE;
	}
	if(rectangle(x, y, 18, 20, 27, 26)) { /*right window*/
		return TRUE;
	}
	if(line(x, y, 15, 0, 9, 6)) { /*left ceiling line*/
		return TRUE;
	}
	if(line(x, y, 15, 31, 9, 25)) { /*right ceiling line*/
		return TRUE;
	}
	if(line(x, y, 9, 6, 9, 25)) { /*top ceiling line*/
		return TRUE;
	}
	if(rectangle(x, y, 4,10,9,16)) { /*chimney*/
		return TRUE;
	}
	return FALSE;
}

int main() {
	int x;
	int y;
	for(x = 0; x < SCREENSIZE; x++) {
		printf("  ");
		for(y = 0; y < SCREENSIZE; y++) {
			if(checkContainment(x, y)) {
				printf("*");
			} else {
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}

