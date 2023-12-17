#include <stdio.h>
#include <stdlib.h>

void find_min_max_distance(int* array, int size, int* min_value, int* max_value, int* distance) {
    // ������������� min_value � max_value ������ ��������� ������
    *min_value = *max_value = array[0];

    // I������������ ��������� �� ������� �������� min � max � �����
    int* min_position = array;
    int* max_position = array;

    // ����������� ���������� � ������������� �������� �� �� ���������
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

    // ���������� ������ �� ����������� ��������
    *distance = max_position - min_position;
}

int main() {
    int size;

    // �������� size � array
    printf("Enter the size of the array: ");
    while (scanf_s("%d", &size) != 1) {
        printf("Error. Try again: ");
        while (getchar() != '\n');  // ������� ������
    }

    // �������� ���'�� � array
    int* array = (int*)malloc(size * sizeof(int));

    // �������� �������� � array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        while (scanf_s("%d", &array[i]) != 1) {
            printf("Error. Try again: ");
            while (getchar() != '\n');  // ������� ������
        }
    }

    int min_value, max_value, distance;

    // ��������� ����. ��. �� ����.
    find_min_max_distance(array, size, &min_value, &max_value, &distance);

    // ����� ���.
    printf("\nMinimum value: %d\n", min_value);
    printf("Maximum value: %d\n", max_value);
    printf("Distance between positions: %d\n", distance);

    // ���������� ���'��
    free(array);

    return 0;
}
