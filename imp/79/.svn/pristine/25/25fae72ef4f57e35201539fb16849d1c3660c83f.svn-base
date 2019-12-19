#include <stdio.h>
#include <math.h>
/*
Felix Schenk 219200574
Tim Ole Tegler 219204149
Anna-Sophie Jankowsky 219200582
Tobias Wolters 219203310
*/



int line(double x, double y, double px, double py, double qx, double qy){
	double z = fabs((py-qy)*x)+((qx-px)*y)+((px*qy)-(qx*py));
	/*double sq = sqrt((py-qy)*(py-qy))+((qx-px)*(qx-px));
	double d=z/sq;	eigentliche formel fuer abstand punkt/gerade*/
	if(z<0.5) return 1;
	else return 0;
}

int main(){
	double x,y,px,py,qx,qy;
	printf("geben sie x,y,px,py,qx,qy an:");
	scanf("%lf %lf %lf %lf %lf %lf",&x,&y,&px,&py,&qx,&qy);
	line(x,y,px,py,qx,qy);

return 0;
}
