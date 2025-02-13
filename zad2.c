#include <stdio.h>

#define ARR_SIZE 6

void powerTwoPrint(int *arr){
    for(int i = 1; i < ARR_SIZE + 1; i++ ){
        arr[i] = 1 << i;
        printf("%d\n", arr[i]);
    }
}

int main(){
    
    int array[ARR_SIZE];
    #if ARR_SIZE > 0 && ARR_SIZE < 11
    powerTwoPrint(array);
    #else 
    printf("Not the right array size. Sorry :(");
    #endif
  
    return 0;
}