#include <stdio.h>

#define ONE 5
#define TWO 10

int main() {
    int i, j;
    float a[ONE][TWO], product[ONE], d;

    // Введення значення d
    printf("Введіть значення d: ");
    while (scanf_s("%d", &d) != 1) {
        // Обробка помилок при введенні
        printf("Error. Try again: ");
        while (getchar() != '\n');
    }

    // Введення матриці a
    printf("Введіть елементи матриці a(%dx%d):\n", ONE, TWO);
    for (i = 0; i < ONE; i++)
        for (j = 0; j < TWO; j++)
            scanf_s("%f", &a[i][j]);

    // Знайдення мінімального значення в кожному рядку
    for (i = 0; i < ONE; i++) {
        float min = a[i][0]; // Ініціалізація мінімального значення поточного рядка
        for (j = 1; j < TWO; j++)
            if (a[i][j] < min)
                min = a[i][j];

        printf("Мінімальне значення в рядку %d: %f\n", i + 1, min);
    }

    return 0;
}
