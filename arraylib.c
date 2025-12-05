#include <stdio.h>
#include "arraylib.h"

int findMaxIndex(int arr[], int size) {
    int max = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] > arr[max]) {
            max = i;
        }
    }
    return max;
}

int findMinIndex(int arr[], int size) {
    int min = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] < arr[min]) {
            min = i;
        }
    }
    return min;
}

float findAverage(int arr[], int size) {
    int s = 0;
    for (int i = 0; i < size; i++) {
        s += arr[i];
    }
    return (float) s / size;
}

void displayArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void reverseArray(int arr[], int size) {
    for (int i = 0; i < size / 2; i++) {
        int t = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = t;
    }
}

void sortArray(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                int t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
        }
    }
}

int linearSearch(int arr[], int size, int value) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == value) {
            return i;
        }
    }
    return -1;
}
