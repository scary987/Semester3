/*
	Hoang Anh, Pham
	Matrikelnummer: 219204706

	Schuemann, Hauke
	Matrikelnummer: 219203901

	Albakkar, Muhannad
	Matrikelnr: 218202908
*/
#include <stdio.h>

double exponent(double x,int n) {
	double temp = 1;
	int i = 0;
	while(i<n) {
		temp *= x;
		i++;
	}
	return temp;
}

double falkutaet(int n) {
	int i = 1; /* you serious mate? type casting is a thing*/
	double k = 1;
	if(n==0) {
		return 1;
	}
	for(i=1;i<=n;i++) {
		k *= i;
	}
	return k;
}

int main() {
	double sum,x;
	int k;
	printf("Winkelwert eingeben\n");
	scanf("%lf", &x);
	sum=0;
	k=0;
	while(k<=100) {
		sum += exponent(-1,k)*exponent(x,(2*k+1))/falkutaet((2*k+1));
		k++;
	}
	printf("sin(%f)= %f",x,sum);
	return 0;
}
