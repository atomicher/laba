#include <stdio.h>

// Функція для знаходження мінімуму серед трьох чисел
float findMinimum(float a, float b, float c) {
    float min = a;
    if (b < min) {
        min = b;
    }
    if (c < min) {
        min = c;
    }
    return min;
}

int main() {
    float num1, num2, num3;

    // Введення трьох чисел з обробкою помилок
    printf("Enter the first number: ");
    while (scanf_s("%f", &num1) != 1) {
        // Обробка помилок при введенні
        printf("Error. Try again: ");
        while (getchar() != '\n');
    }

    printf("Enter the second number: ");
    while (scanf_s("%f", &num2) != 1) {
        // Обробка помилок при введенні
        printf("Error. Try again: ");
        while (getchar() != '\n');
    }

    printf("Enter the third number: ");
    while (scanf_s("%f", &num3) != 1) {
        // Обробка помилок при введенні
        printf("Error. Try again: ");
        while (getchar() != '\n');
    }

    // Знаходження та виведення мінімуму
    float minimum = findMinimum(num1, num2, num3);
    printf("The minimum of the three numbers is: %f\n", minimum);

    return 0;
}
