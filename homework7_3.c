//Считать массив из 12 элементов и выполнить циклический сдвиг ВПРАВО на 4 элемента.

#include <stdio.h>

#define SIZE 12

void Shift(int arr[], int n, int k) 
{
    int temp[k];
    
    // Сохраняем последние k элементов во временный массив
    for (int i = n - k; i < n; i++) 
    {
        temp[i - (n - k)] = arr[i];
    }
    
    // Сдвигаем остальные элементы вправо на k позиций
    for (int i = n - k - 1; i >= 0; i--) 
    {
        arr[i + k] = arr[i];
    }
    
    // Вставляем временный массив в начало
    for (int i = 0; i < k; i++) 
    {
        arr[i] = temp[i];
    }
}

int main() 
{
    int arr[SIZE];
    
    printf("Enter [%d] array:\n", SIZE);
    for (int i = 0; i < SIZE; i++) 
    {
        scanf("%d", &arr[i]);
    }
    
    Shift(arr, SIZE, 6); //размер сдвига - 4
    
    printf("Finish array with 4 step shift:\n");
    for (int i = 0; i < SIZE; i++) 
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}