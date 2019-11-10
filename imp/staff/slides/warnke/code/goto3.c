#include <stdio.h>


int main() {
    int x, a, b, s;
    
    a = 123;
    
    x = a;

    l3:
    s = 0;
    
    l4:
    b = x % 10;
    
    x = x / 10;
    
    s = s + b;
    
    if (x != 0) goto l4;
    
    if (s >= 10) {
        x = s;
        goto l3;
    }
    
    if (s == 0 || s == 3 || s == 6 || s == 9) {
        printf("true");
    } else {    
        printf("false");
    }
    
    return 0;
}
