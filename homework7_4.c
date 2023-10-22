//Считать массив из 10 элементов и отсортировать его по последней цифре числа

#include <stdio.h>

#define SIZE 10 //размер массива

//сортировка пузырьком?
//как обычная сортировка только с первоначальным делением на 10

void sort(int *a, int *b) // Функция для обмена значениями двух элементов массива
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int getLastDigit(int num) // Функция для получения последней цифры числа
{
    return num % 10;
}

void sortByLastDigit(int arr[], int size)  // Функция для сортировки массива по последней цифре числа
{
    int i, j;
    for (i = 0; i < size - 1; i++) 
    {
        for (j = 0; j < size - i - 1; j++) 
        {
            if (getLastDigit(arr[j]) > getLastDigit(arr[j+1])) 
            {
                sort(&arr[j], &arr[j+1]);
            }
        }
    }
}

int main() 
{
    int arr[SIZE];
    
    printf("enter %d numbers:\n", SIZE);
    for (int i = 0; i < SIZE; i++) 
    {
        scanf("%d", &arr[i]);
    }
    
    sortByLastDigit(arr, SIZE);
    
    printf("Sorting array:\n");
    for (int i = 0; i < SIZE; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}