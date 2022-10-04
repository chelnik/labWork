#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// 13 task

// находит наименьший элемент в массиве
int takeMinimumFromArray(int *arr, int len) {
    int min = arr[0];
    for (int i = 0; i < len; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}
// находит максимальный индекс равный 1 в массиве из 5 элементов
int getMaxIndex(int *arr) {
    int index = 0;
    for (int i = 0; i < 5; i++) {
        if (arr[i] > 0) {
            index = i;
        } else {
            continue;
        }
    }
    return index;
}
int main() {
    int arr[5][5] = {{1, 2, 3, 4, 5},
                     {6, 7, -8, 9, 10},
                     {11, 12, 13, 14, 15},
                     {16, -17, 18, 19, 20},
                     {1, 2, 3, 4, 5}};

    int arrOfValue[5] = {0};

    for (int i = 0; i < 5; i++) {
        if (takeMinimumFromArray(arr[i], 5) > 0) {
            arrOfValue[i] = 1;
        } else {
            arrOfValue[i] = -1;
        }
    }
    printf("%d\n", getMaxIndex(arrOfValue));
    return 0;
}
