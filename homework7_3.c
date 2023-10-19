//Считать массив из 12 элементов и выполнить циклический сдвиг ВПРАВО на 4 элемента.

#include <stdio.h>

#define SIZE 12 //размер массива
#define SHIFTSIZE 6 //размер сдвига

void Shift(int arr[], int n, int k) 
{
    int temp[k];
    
    for (int i = n - k; i < n; i++) // Сохраняем последние k элементов во временный массив
    {
        temp[i - (n - k)] = arr[i];
    }
    
    for (int i = n - k - 1; i >= 0; i--) // Сдвигаем остальные элементы вправо на k позиций
    {
        arr[i + k] = arr[i];
    }
    
    for (int i = 0; i < k; i++) // Вставляем данные в массив до сдвига
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
        scanf("%d", &arr[i]);       //обычное чтение данных в массив
    }
    
    Shift(arr, SIZE, SHIFTSIZE);
    
    printf("Finish array with %d step shift:\n", SHIFTSIZE);
    for (int i = 0; i < SIZE; i++) 
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}