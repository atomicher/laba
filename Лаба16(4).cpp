#include <stdio.h>

#define M 4
#define N 5

int main() {
    int matrix[M][N];
    int counter = 1;

    for (int i = 0; i < M; i++) {
        if (i % 2 == 0) {
            // Заповнення в прямому порядку для парних рядків
            for (int j = 0; j < N; j++) {
                matrix[i][j] = counter++;
            }
        }
        else {
            // Заповнення в зворотньому порядку для непарних рядків
            for (int j = N - 1; j >= 0; j--) {
                matrix[i][j] = counter++;
            }
        }
    }

    // Виведення матриці
    printf("Resulting matrix:\n");
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            printf("%2d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
