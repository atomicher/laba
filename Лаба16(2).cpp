#include <stdio.h>
#define MAX_SIZE 10

int main() {
    int N, i, j;

    // Введення значення N
    printf("Enter the value d: ");
    while (scanf_s("%d", &N) != 1, N > MAX_SIZE || N <= 0) {
        // Обробка помилок при введенні
        printf("Error. Try again: ");
        while (getchar() != '\n');
    }


    float a[MAX_SIZE][MAX_SIZE];
    float minVector[MAX_SIZE];

    // Введення матриці a
    printf("Enter the matrix elements a(%dx%d):\n", N, N);
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++) {
            printf("A[%d][%d]: ", i + 1, j + 1);
            scanf_s("%f", &a[i][j]);
        }

    // Знаходження найменших значень в рядках та формування вектора
    for (i = 0; i < N; i++) {
        for (int i = 0; i < N; i++) {
            float minVal = a[i][0];

            for (int j = 1; j < N; j++) {
                if (a[i][j] < minVal) {
                    minVal = a[i][j];
                }
            }
            minVector[i] = minVal;
        }

        // Виведення вектора з найменших значень
        printf("A vector of the smallest values of the row elements:\n");
        for (int i = 0; i < N; i++) {
            printf("%.2f ", minVector[i]);
        }

        return 0;
    }
}
