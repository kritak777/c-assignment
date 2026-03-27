#include <stdio.h>
#include <stdbool.h>

#define SIZE 5

bool validateArray(int *arr, int size) {
    if (arr == NULL || size <= 0) {
        printf("Invalid array\n");
        return false;
    }
    return true;
}

bool calculateSum(int *arr, int size, int *result) {
    if (result == NULL || !validateArray(arr, size))
        return false;

    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += *(arr + i);
    }

    *result = sum;
    return true;
}

bool findMax(int *arr, int size, int *max) {
    if (max == NULL || !validateArray(arr, size))
        return false;

    *max = arr[0];
    for (int i = 1; i < size; i++) {
        if (*(arr + i) > *max)
            *max = *(arr + i);
    }

    return true;
}

int main() {
    int arr[SIZE] = {10, 20, 30, 40, 50};
    int sum, max;

    if (calculateSum(arr, SIZE, &sum))
        printf("Sum = %d\n", sum);

    if (findMax(arr, SIZE, &max))
        printf("Max = %d\n", max);

    return 0;
}