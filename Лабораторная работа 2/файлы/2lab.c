#include <stdio.h>

int main() {
    int arr[20] = {1,  2,  3,  4,  5,  6,  7,   8,  9,  10,
                   11, 12, 13, 14, 15, 16, -17, 18, 19, 20};
    int size = sizeof arr / sizeof arr[0];
    int i = 0, flag = 0, element, numberofelement;
    while (i < size) {
        printf("%2d ", arr[i]);
        // изменяем отрицательный эл-нт массива
        if (arr[i] < 0 && flag == 0) {
            element = arr[i];
            arr[i] = arr[i - 1] * arr[i - 2];
            flag++;
            numberofelement = i + 1;
        }

        i++;
        if (i % 5 == 0) {
            printf("\n");
        }
    }

    if (flag > 0) {
        printf("\n%d–й элемент ––> значение элемента: %d\n\n", numberofelement,
               element);
        i = 0;
        while (i < size) {
            printf("%2d ", arr[i]);
            i++;
            if (i % 5 == 0) {
                printf("\n");
            }
        }
    } else {
        printf("\nВ массиве нет отрицательных значений\n\n");
    }
    return 0;
}

// gcc 2lab.c -lm компилировать с флагом -lm