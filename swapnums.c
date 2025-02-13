#include <stdio.h> 

#define SWAP(A,B,TYPE) TYPE C;\
    C = A; A = B; B = C;

void main(){
    int a = 6, b = 40;
    printf("A = %d, B = %d", a,b);
    SWAP(a , b , int);
    printf("Swap is done. Now A is %d, B is %d\n", a, b);
}