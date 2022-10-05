#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int getMaxIndexRecursive(int *arr, int curPos) {
    return arr[curPos] == 1 ? curPos : getMaxIndexRecursive(arr, curPos);
}
int main() {
    // int arrOfValue[5] = {0};
    int arrOfValue[5] = {1, 1, -1, -1, -1};
    printf("\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arrOfValue[i]);
    }
    printf("%d\n", getMaxIndexRecursive(arrOfValue, 5));

    return 0;
}
