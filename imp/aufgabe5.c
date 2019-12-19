#include <stdio.h>
int main() {
int w, x, y, z;
printf("W? ");
scanf("%d",&w);
printf("X? ");
scanf("%d",&x);
y=1;
while(y<=x) y=y*w;
y=y/w;
while(y > 0) {
z = x/y;
printf("%d",z);
x = x - y*z;
y = y/w;
}
printf("\n");
return 0;
}
