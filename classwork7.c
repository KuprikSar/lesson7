#include <stdio.h>

//Считать массив из 10 элементов и найти в нем максимальный и минимальный элементы
//и их номера. 

/*
int main()
{
    int i, max, min;
    int arr[10];

    max = 0;
    min = 0;

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] < arr[min])
        {
            min = i;
        }
    }

    for (i = 1; i < 10; i++)
    {
        if (arr[i] > arr[max])
        {
            max = i;
        }
    }
        
    printf("%d %d\n", arr[min], arr[max]);
    return 0;
}
*/



// Считать массив из 10 элементов и выполнить инверсию отдельно для 1-ой и 2-ой
// половин массива. Необходимо изменить считанный массив и напечатать его
// одним циклом.


/*
#define SIZE 10

void invertArray(int* array, int start, int end) 
{
    while (start < end) 
    {
        int temp = array[start]; //меняем местами значения
        array[start] = array[end];
        array[end] = temp;
        start++;
        end--;
    }
}

int main() 
{
    int array[SIZE];
    
    printf("enter array:\n");
    for (int i = 0; i < SIZE; i++) 
    {
        scanf("%d", &array[i]);
    }
        
    invertArray(array, 0, SIZE / 2 - 1); // Инверсия первой половины массива
   
    invertArray(array, SIZE / 2, SIZE - 1); // Вывод итогового массива
    printf("end array:\n"); // Вывод итогового массива
    for (int i = 0; i < SIZE; i++) 
    {
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}
*/

#define SIZE 10

int main() 
{
    int array[SIZE];
    int repeat[SIZE] = {0}; // Обнуление массива
    int result[SIZE];
    int count = 0; // Счетчик чисел, которые повторяются
    
    printf("enter array:\n");
    for (int i = 0; i < SIZE; i++) 
    {
        scanf("%d", &array[i]);
    }
    
    // Подсчет количества повторений каждого числа
    for (int i = 0; i < SIZE; i++) 
    {
        for (int j = i+1; j < SIZE; j++) 
        {
            if (array[i] == array[j]) 
            {
                repeat[i]++;
            }
        }
    }
    
    // Добавление повторяющихся чисел в результирующий массив
    for (int i = 0; i < SIZE; i++) 
    {
        if (repeat[i] > 0) 
        {
            result[count] = array[i];
            count++;
        }
    }
    
    // Вывод результирующего массива
    printf("result array:\n");
    for (int i = 0; i < count; i++) 
    {
        printf("%d ", result[i]);
    }
    printf("\n");
    
    return 0;
}