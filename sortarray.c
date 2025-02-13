#include <stdio.h>

#define SWAP(X, Y, TYPE) { TYPE temp = X; X = Y; Y = temp; }

#define SORT(ARRAY, SIZE, TYPE, COMPARE) \
    for (int i = 0; i < SIZE - 1; i++) \
        for (int j = i + 1; j < SIZE; j++) \
            if (ARRAY[i] COMPARE ARRAY[j]) \
                SWAP(ARRAY[i], ARRAY[j], TYPE)

int main() {
    int array[] = {5, 3, 8, 1, 4};
    int size = 5;

    SORT(array, size, int, >);

    printf("Sorted array in ascending order: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    SORT(array, size, int, <);

    printf("Sorted array in descending order: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
