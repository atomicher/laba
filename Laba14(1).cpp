#include <stdio.h>
#include <stdlib.h>

void find_min_max_distance(int* array, int size, int* min_value, int* max_value, int* distance) {
    // Ініціалізування min_value і max_value першим елементом масиву
    *min_value = *max_value = array[0];

    // Iніціалізування покажчика на позиції елементів min і max в масиві
    int* min_position = array;
    int* max_position = array;

    // Знаходження мінімального і максимального елемента та їх положення
    for (int i = 1; i < size; i++) {
        if (array[i] < *min_value) {
            *min_value = array[i];
            min_position = array + i;
        }
        else if (array[i] > *max_value) {
            *max_value = array[i];
            max_position = array + i;
        }
    }

    // Обчислення відстані між положеннями елементів
    *distance = max_position - min_position;
}

int main() {
    int size;

    // Введення size в array
    printf("Enter the size of the array: ");
    while (scanf_s("%d", &size) != 1) {
        printf("Error. Try again: ");
        while (getchar() != '\n');  // Очистка буфера
    }

    // Виділення пам'яті в array
    int* array = (int*)malloc(size * sizeof(int));

    // Введення елементів в array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        while (scanf_s("%d", &array[i]) != 1) {
            printf("Error. Try again: ");
            while (getchar() != '\n');  // Очистка буфера
        }
    }

    int min_value, max_value, distance;

    // Отримання макс. мін. та дист.
    find_min_max_distance(array, size, &min_value, &max_value, &distance);

    // Показ рез.
    printf("\nMinimum value: %d\n", min_value);
    printf("Maximum value: %d\n", max_value);
    printf("Distance between positions: %d\n", distance);

    // Вивільнення пам'яті
    free(array);

    return 0;
}
