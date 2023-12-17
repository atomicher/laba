#include <stdio.h>

int main() {

    // Оголошення масиву розміром 100
    int arr[100];

    // Змінні для розміру масиву та індексу
    int n, i;

    // Вивід та зчитування
    printf("Enter the array size: ");
    while (scanf_s("%d", &n) != 1) {
        // Обробка помилок при введенні
        printf("Error. Try again: ");
        while (getchar() != '\n');
    }
    // Вивід для введення елементів
    printf("Enter the elements of the array: \n");

    // Цикл для зчитування всіх елементів
    for (i = 0; i < n; i++) {
        scanf_s("%d", &arr[i]);
    }

    // Цикл для обнулення парних елементів
    for (i = 0; i < n; i++) {

        // Перевірка на парність
        if (arr[i] % 2 == 0) {

            // Обнулення парного елемента 
            arr[i] = 0;

        }

    }

    // Вивід зміненого масиву
    printf("Array after nulling even elements: \n");

    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
