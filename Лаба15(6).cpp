#include <stdio.h>

#define MAX_SIZE 100 // Максимальний розмір масиву

int main() {
    // Визначення розміру масиву
    int n;

    printf("Enter the size of the array (no more than %d): ", MAX_SIZE);
    while (scanf_s("%d", &n) != 1, n > MAX_SIZE || n <= 0) {
        // Обробка помилок при введенні
        printf("Error. Try again: ");
        while (getchar() != '\n');
    }

    // Оголошення цілочисельного масиву розміром n
    int arr[MAX_SIZE];

    // Введення елементів масиву
    printf("Enter array elements:\n");
    for (int i = 0; i < n; ++i) {
        printf("Element %d: ", i + 1);
        scanf_s("%d", &arr[i]);
    }

    // Знаходження максимального та мінімального значення
    int max = arr[0];
    int min = arr[0];

    for (int i = 1; i < n; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }

        if (arr[i] < min) {
            min = arr[i];
        }
    }

    // Виведення результату
    printf("Maximum value: %d\n", max);
    printf("Minimum value: %d\n", min);

    return 0;
}

