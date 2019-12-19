#include <stdio.h>
#include <math.h>

int fak(int f) {
  int fak = 1;
  for(int i=1;i<=f;i++){
      fak*=i;
  } 
  return fak;
}

int main()
{   
    double x;
    scanf("%d", &x);
    double sum = 0;
    int n;
    int N;
    scanf("%d", &N);
    for(n=0; n <= N; n++){
        sum = (pow((-1),n))*((pow(x,(2*n+1))) / (fak(2*n+1)));
    }
    printf("%lf", sum);
    
    return 0;
}
