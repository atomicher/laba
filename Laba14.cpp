#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    // Запитуємо користувача про розмір масиву
    printf("Enter the number of elements in the array: ");
    scanf_s("%d", &n);

    // Виділяємо пам'ять для динамічного масиву розміром n
    int* array = (int*)malloc(n * sizeof(int));

    // Перевірка на успішне виділення пам'яті
    if (array == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1; // Повертаємо код помилки
    }

    // Запитуємо користувача про елементи масиву
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; ++i) {
        printf("Element %d: ", i + 1);
        scanf_s("%d", &array[i]);
    }

    // Вказівник для ітерації через масив та обчислення суми елементів
    int* ptr = array;
    int sum = 0;

    for (int i = 0; i < n; ++i) {
        sum += *ptr; // Додаємо значення, на яке вказує вказівник
        ptr++;      // Переходимо до наступного елемента масиву
    }

    // Обчислюємо середнє значення
    double average = (double)sum / n;

    // Виводимо результат
    printf("Average value of array elements: %.2f\n", average);

    // Звільняємо виділену пам'ять
    free(array);

    return 0;
}
