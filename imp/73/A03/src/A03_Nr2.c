#include<stdio.h>
#include<math.h>
#define PI 3.141592654

void star(int sinus, int cosinus){
	if(sinus == cosinus){
		for(;sinus>0;--sinus) printf(" ");
			printf("*\n");
	}
	else{
		for(;sinus>0;--sinus) printf(" ");
		printf("+\n");
		
		for(;cosinus>0;--cosinus) printf(" ");
		printf("x\n");
	}
}

int main(){
	double x;
	for(x = -180.0;x <= 180.0; x += 15.0){
		
		star(10 + 10 * sin (x / 180 * PI),10 + 10 * cos (x / 180 * PI));
		
	}
	return 0;
}