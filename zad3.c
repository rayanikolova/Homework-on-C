#include <stdio.h>
#include <stdlib.h>

#define ARR_SIZE 5

void bubble_sort(int arr[]) {
    for (int i = 0; i < ARR_SIZE - 1; i++) {
        for (int j = 0; j < ARR_SIZE - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void selection_sort(int arr[]) {
    for (int i = 0; i < ARR_SIZE - 1; i++) {
        int min = i;
        for (int j = i + 1; j < ARR_SIZE; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}

void insertion_sort(int arr[]) {
    for (int i = 1; i < ARR_SIZE; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}


void reverse_array(int arr[]) {
    for (int i = 0; i < ARR_SIZE / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[ARR_SIZE - i - 1];
        arr[ARR_SIZE - i - 1] = temp;
    }
}

void print_array(int arr[]) {
    for (int i = 0; i < ARR_SIZE; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    printf("Array: \n");
    print_array(arr);

    #ifdef _WIN32
        bubble_sort(arr);
    #elif __linux__
        selection_sort(arr);
    #elif __APPLE__
        insertion_sort(arr);
    #else
        reverse_array(arr);
    #endif
    
    printf("Modified array: \n");
    print_array(arr);

    return 0;
}
