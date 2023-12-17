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
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; ++i) {
        printf("Element %d: ", i + 1);
        scanf_s("%d", &arr[i]);
    }

    // Обчислення суми елементів масиву
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += arr[i];
    }

    // Виведення результату
    printf("The sum of array elements: %d\n", sum);

    return 0;
}
