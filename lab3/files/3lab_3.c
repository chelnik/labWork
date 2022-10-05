#include <stdio.h>
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

// Рекурсивная функция для вычисления максимального индекса равный 1 в массиве
// из 5 элементов
int getMaxIndexRecursive(int *arr, int curPos) {
    return arr[curPos] == 1 ? curPos : getMaxIndexRecursive(arr, curPos - 1);
}

// func fill from file
void fillArrayFromFile(int arr[5][5]) {
    // FILE *fp = fopen("text.txt", "r");
    FILE *fp = fopen("newText.txt", "r");
    if (fp != NULL) {
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                fscanf(fp, "%d", &arr[i][j]);
            }
        }
        fclose(fp);
    } else {
        printf("Ошибка открытия файла\n");
    }
}

// func fill from stdin
void fillArrayFromStdin(int arr[5][5]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
}
// func stout array
void printArray(int arr[5][5]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int arr[5][5];
    // флаг для открытия файла
    int flag = 1;
    while (flag) {
        printf(
            "Cпособов ввода \n  Ввод с клавиатуры: 1 \n  Ввод из "
            "файла: 2\n");
        // опция открытия файла
        int option = 0;
        scanf("%d", &option);
        switch (option) {
            case 1:
                fillArrayFromStdin(arr);
                flag = 0;
                break;
            case 2:
                fillArrayFromFile(arr);
                flag = 0;
                break;
            default:
                printf("Некорректный выбор\n");
                break;
        }
    }

    printArray(arr);
    int arrOfValue[5] = {0};

    printf("\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arrOfValue[i]);
    }

    for (int i = 0; i < 5; i++) {
        if (takeMinimumFromArray(arr[i], 5) > 0) {
            arrOfValue[i] = 1;
        } else {
            arrOfValue[i] = -1;
        }
    }
    printf("\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arrOfValue[i]);
    }
    printf("\n%d", getMaxIndexRecursive(arrOfValue, 4));
    return 0;
}
