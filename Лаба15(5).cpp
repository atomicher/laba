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

    int arr[MAX_SIZE];

    // Введення елементів масиву
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; ++i) {
        printf("Element %d: ", i + 1);
        scanf_s("%d", &arr[i]);
    }

    // Виведення елементів масиву в зворотньому порядку
    printf("Array elements in reverse order:\n");
    for (int i = n - 1; i >= 0; --i) {
        printf("%d ", arr[i]);
    }

    return 0;
}
