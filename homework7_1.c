// Ввести с клавиатуры массив из 5 элементов, найти среднее арифметическое
// всех элементов массива.

#include <stdio.h>

#define SIZE 5

int main() 
{
    int arr[SIZE];
    int sum = 0;

    printf("Enter [%d] array:\n", SIZE);
    for (int i = 0; i < SIZE; i++) 
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    double average = (double)sum / SIZE;

    printf("Average: %.3f\n", average);

    return 0;
}