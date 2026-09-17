#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a, b, c, maks, min;
    int ronde = 0;
    
    scanf ("%d", &a);
    scanf ("%d", &b);
    scanf ("%d", &c);
    
     while (a != b && a != c && b!= c){
        if (a > b && a > c){
            (a = a-1);
            if (b < c) {
                (b = b+1);
            } else {(c = c+1);}
        }
        else if (b > a && b > c) {
            (b = b-1);
            if (b < c) {
                (b = b + 1);
            } else { (c = c+1);}
        }
        else {(c = c-1);
            if (a < b) {
                (a = a+1);
            } else {(b = b+1);}
        }
        ronde = ronde + 1;
     }
     printf("%d", ronde);
     
    return 0;
}