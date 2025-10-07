#include <stdio.h>
#define _CRT_SECURE_NO_DEPRECATE
#include <stdlib.h>
#include <locale.h>
#define _USE_MATH_DEFINES
#include <math.h>

int main() {
    int N;
    int temp;
    int found = 0;
    setlocale(LC_ALL, "RUS");
    printf("Введите число N (меньше 1000): ");
    scanf("%d", &N);

    if (N < 0 || N >= 1000) {
        printf("Число должно быть меньше 1000 и неотрицательным.\n");
        return 1;
    }

    temp = N;
    while (temp > 0) {
        if (temp % 10 == 5) {
            found = 1;
            break;
        }
        temp /= 10;
    }

    if (found) {
        printf("В числе %d есть цифра 5.\n", N);
    }
    else {
        printf("В числе %d нет цифры 5.\n", N);
    }

    return 0;
}