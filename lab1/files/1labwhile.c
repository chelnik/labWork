#include <math.h>
#include <stdio.h>
int main() {
    double a, b, n, i;
    double h, avg, max;
    // a = 2, b = 3, n = 10
    printf("Чельник Вадим Давидович ИТЗ-201\n");
    scanf("%lf %lf %lf", &a, &b, &n);
    printf("Сумма переменных: %.0lf\n", a + b);
    h = (b - a) / n;
    i = 0;
    while (i < n) {
        double x, y;
        x = a + i * h;
        //  Проверка на область значений x
        if (x == 1 || x == -1 || x <= -2) {
            printf("Функция не определена");
        } else {
            y = x / (pow(x, 2) - 1) + (log(x + 2.0) / log(3.0));
            printf("y = %lf\n", y);
            avg += y;
            max = y > max ? y : max;
        }
    }
    if (n == 0) {
        printf("Значений нет\n");
    } else {
        avg = avg / n;
        printf("average = %lf\n", avg);
        printf("max = %lf\n", max);
    }
    i++;
    return 0;
}

// gcc 1lab.c -lm компилировать с флагом -lm
