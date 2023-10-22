// взять массив из 10 элементов и отобрать в другой массив все числа у
// которых вторая с конца цифра (число десятков) – ноль.

#include <stdio.h>

#define SIZE 10 //размер массива

int CheckZero(int number) //Проверяем вторую цифру с конца на ноль
{
    int secondDigit = (number / 10) % 10;  // Получаем вторую цифру с конца

    if (secondDigit == 0) 
    {
        return 1;  // Если цифра с конца равна 0
    }

    return 0;  // Если не равна 0
}

int main() 
{
    int array[SIZE];
    printf("Enter array: ");
    for (int i = 0; i < SIZE; i++) 
    {
        scanf("%d", &array[i]);
    }

    int resultArray[SIZE]; //Это будет новый массив
    int resultSize = 0;

    for (int i = 0; i < SIZE; i++) 
    {
        if (CheckZero(array[i])) //Проверяем вторую цифру сразу по ретурну и проходим так каждую, если не попадает то просто пропускаем цифру в выводе нового массива
        {
            resultArray[resultSize] = array[i];
            resultSize++;
        }
    }

    printf("End array:\n");
    for (int i = 0; i < resultSize; i++) {
        printf("%d ", resultArray[i]);
    }

    return 0;
}