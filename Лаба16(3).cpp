#include <stdio.h>

#define ONE 5
#define TWO 10

int main() {
    int i, j;
    float matrix[ONE][TWO];

    // Введення матриці
    printf("Enter the elements of the matrix (%dx%d):\n", ONE, TWO);
    for (i = 0; i < ONE; i++)
        for (j = 0; j < TWO; j++)
            scanf_s("%f", &matrix[i][j]);

    // Обчислення середнього арифметичного для кожного стовпчика
    float columnSum[TWO] = { 0 };  // Масив для сум елементів в кожному стовпчику

    for (j = 0; j < TWO; j++)
        for (i = 0; i < ONE; i++)
            columnSum[j] += matrix[i][j];

    for (j = 0; j < TWO; j++) {
        float columnAverage = columnSum[j] / ONE;
        int count = 0;

        // Підрахунок кількості елементів більших за середнє арифметичне
        for (i = 0; i < ONE; i++)
            if (matrix[i][j] > columnAverage)
                count++;

        printf("In column %d, the number of elements greater than the average is: %d\n", j + 1, count);
    }

    return 0;
}
