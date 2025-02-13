#include <stdio.h>


#define PRINT_NAME(A) #A

#define DEBUG_HELPER(VAR)\
    printf("The %s is %d\n", PRINT_NAME(VAR), VAR);\
    printf("File: %s\n", __FILE__);\
    printf("Line: %d\n", __LINE__);\

int main(){

    int number = 10;

    DEBUG_HELPER(number);

    return 0;
}