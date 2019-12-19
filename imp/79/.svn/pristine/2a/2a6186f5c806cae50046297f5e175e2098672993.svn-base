#include <stdio.h>
#include <math.h>
/*
Felix Schenk 219200574
Tim Ole Tegler 219204149
Anna-Sophie Jankowsky 219200582
Tobias Wolters 219203310
*/

double line(double x, double y, double lx, double uy, double rx, double oy){
	double z = fabs((uy-oy)*x)+((rx-lx)*y)+((lx*oy)-(rx*uy));
		return z;
	}
int rectangle(double x, double y, double lx, double uy, double rx, double oy){

	int i,j;
	double d1,d2;
	d1=line(x,y,lx,uy,rx,oy);
	d2=line(x,y,rx,uy,rx,oy);
	/*d3=line(x,y,rx,oy,lx,oy);
	d4=line(x,y,lx,uy,lx,oy);*/
	printf("\n");
	/*schornstein*/
	for(i=2*d1;i>=1;i--){
	printf(" ");}
	for(i=d1;i>=1;i--){
		printf("*");
		if(i==1)printf("\n");
		}
	for(j=d1;j>=1;j--){
		for(i=3*d1;i>=1;i--)
		{
		if(i==d1||i==1){
		printf("*");}
		else printf(" ");
		if(i==1)printf("\n");
		}}
		/*dach*/
	for(i=3*d2;i>=1;i--){
		if(i<=3*d2-d1&&i>=d1){
		printf("*");}
		else printf(" ");
		if(i==1)printf("\n");
	}/*schraege*/
	for(j=1;j<=d1;j++){
	for(i=3*d2;i>=1;i--){
		if(i==3*d2-d1+j||i==d1-j){
		printf("*");}
		else printf(" ");
		if(i==1)printf("\n");
	}}
	/*dach2*/
	for(i=3*d2;i>=1;i--){
		printf("*");
		if(i==1)printf("\n");
	}
	/*rumpf*/
	for(j=1;j<=3*d2;j++){
	for(i=3*d2;i>=1;i--){
		if(i==3*d2||i==1||(j>=3&&j<=3+d1&&i<=3*d2-2&&i>=3*d2-1-d1)||(j>=3&&j<=3+d1&&i<=d1+3&&i>=3)||(j>=2*d2&&j<=3*d2&&i<=2*d2-1&&i>=d2+1)){
		printf("*");}
		else printf(" ");
		if(i==1)printf("\n");
	} }
	/*boden*/
	for(i=3*d2;i>=1;i--){
		printf("*");
		if(i==1)printf("\n");
	}
 return 0;


}
int main(){
	double x=2,y=2,lx=5,uy=5,rx=7,oy=7;
	/*printf("geben sie x,y,lx,uy,rx,oy an:");
	scanf("%lf %lf %lf %lf %lf %lf",&x,&y,&lx,&uy,&rx,&oy); */
	rectangle(x,y,lx,uy,rx,oy);


return 0;
}
