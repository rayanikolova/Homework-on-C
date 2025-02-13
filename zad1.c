#include <stdio.h>

#define DEBUG

void sortArr(int *arr, int arrlen) {
  int sorted = 0;
  for (int i = 0; i < arrlen - 1 && !sorted; i++) {
    sorted = 1;
    for (int j = 0; j < arrlen - i - 1; j++) {
      if (arr[j] > arr[j+1]) {
        int temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
        sorted = 0;
      }
    }
  }
}
void sumIndex(int *arr, int arrlen){
    int sum = 0;
    printf("Index by 3:\n");
    for(int i = 0; i < arrlen; i++){
        if(i % 3 == 0){
            sum += arr[i];
            printf(" %d", arr[i]);
        }
    }
}


int main(){

    int array[7] = {3, 5, 6, 1, 2, 4, 7};

    sortArr(array, 7);
    #ifdef DEBUG
    sumIndex(array, 7);
    #endif 

    return 0;
}