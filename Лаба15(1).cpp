#include <stdio.h>

int main() {
    float a, b;

    // Введення значення a
    printf("Enter a: \n");
    while (scanf_s("%f", &a) != 1) {
        // Обробка помилок при введенні
        printf("Error. Try again: ");
        while (getchar() != '\n');
    }

    // Введення значення b
    printf("Enter b: \n");
    while (scanf_s("%f", &b) != 1) {
        // Обробка помилок при введенні
        printf("Error. Try again: ");
        while (getchar() != '\n');
    }

    // Порівняння та виведення результату
    if (a > b) {
        printf("%f\n", a);
    }
    else if (a < b) {
        printf("%f\t%f\n", a, b);
    }
    else {
        printf("Numbers are equal: %f\n", a);
    }

    return 0;
}
