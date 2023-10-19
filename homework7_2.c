//Ввести с клавиатуры массив из 5 элементов, найти минимальный из них.

#include <stdio.h>

#define SIZE 5

int main() 
{
    int arr[SIZE];
    int min = 0;

    printf("Enter [%d] array:\n", SIZE);
    for (int i = 0; i < SIZE; i++) 
    {
        scanf("%d", &arr[i]);
        if (arr[i] < arr[min])
        {
            min = i;
        }
    }
    printf("%d\n", arr[min]);
    return 0;
}