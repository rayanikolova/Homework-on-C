#include <stdio.h>

#define COMPARISON(A, B) ((A > B) ? A : B)

int main(){

    int a = 1, b = 5;
    printf("The bigger num is %d", COMPARISON(b, a));

 
    return 0;
}