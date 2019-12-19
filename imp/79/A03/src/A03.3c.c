#include <stdio.h>
#include <math.h>
/*
Felix Schenk 219200574
Tim Ole Tegler 219204149
Anna-Sophie Jankowsky 219200582
Tobias Wolters 219203310
*/

double distance(double x, double y, double lx, double uy, double rx, double oy){
	double z = fabs((uy-oy)*x)+((rx-lx)*y)+((lx*oy)-(rx*uy));
	/*double sq = sqrt((uy-oy)*(uy-oy))+((rx-lx)*(rx-lx));
	double d=z/sq;*/
		return z;
	}
int rectangle(double x, double y, double lx, double uy, double rx, double oy){


	double d1,d2,d3,d4;
	d1=distance(x,y,lx,uy,rx,oy);
	d2=distance(x,y,rx,uy,rx,oy);
	d3=distance(x,y,rx,oy,lx,oy);
	d4=distance(x,y,lx,uy,lx,oy);

	if(d1<0.5||d2<0.5||d3<0.5||d4<0.5) return 1;
	else return 0;


}
int main(){
	double x,y,lx,uy,rx,oy;
	printf("geben sie x,y,lx,uy,rx,oy an:");
	scanf("%lf %lf %lf %lf %lf %lf",&x,&y,&lx,&uy,&rx,&oy);
	rectangle(x,y,lx,uy,rx,oy);


return 0;
}
