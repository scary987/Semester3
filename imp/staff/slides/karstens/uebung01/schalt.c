
#include <stdio.h>
/*  Schaltjahr berechnen */
main(){
        int jahr = 1996;
         
        if (jahr%4==0)
                if (jahr%100==0) 
                        if (jahr%400==0)
                                printf(" %d ist ein Schaltjahr",jahr);
                        else
                                printf(" %d ist kein Schaltjahr",jahr);
                else
                      printf(" %d ist eine Schaltjahr",jahr);
        else
                printf(" %d ist kein Schaltjahr",jahr);
}
 
