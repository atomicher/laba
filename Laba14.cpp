#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    // �������� ����������� ��� ����� ������
    printf("Enter the number of elements in the array: ");
    scanf_s("%d", &n);

    // �������� ���'��� ��� ���������� ������ ������� n
    int* array = (int*)malloc(n * sizeof(int));

    // �������� �� ������ �������� ���'��
    if (array == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1; // ��������� ��� �������
    }

    // �������� ����������� ��� �������� ������
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; ++i) {
        printf("Element %d: ", i + 1);
        scanf_s("%d", &array[i]);
    }

    // �������� ��� �������� ����� ����� �� ���������� ���� ��������
    int* ptr = array;
    int sum = 0;

    for (int i = 0; i < n; ++i) {
        sum += *ptr; // ������ ��������, �� ��� ����� ��������
        ptr++;      // ���������� �� ���������� �������� ������
    }

    // ���������� ������ ��������
    double average = (double)sum / n;

    // �������� ���������
    printf("Average value of array elements: %.2f\n", average);

    // ��������� ������� ���'���
    free(array);

    return 0;
}
