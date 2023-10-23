#include <stdio.h>
#include <string.h>

//#define SIZE 10

/*
int strlen2(const char *src) //потомучто видит функцию в библиотеке string.h
{
    int len=0;
    while (*src++) len++;
    return len;
}
int main(int argc, char **argv)
{
    char* str={"Hello!"};
    printf("%d\n",strlen2(str));
    return 0;
}

char *strcpy (char *dst, char *src)
{
    char *ptr = dst;
    while(*dst++=*src++);
    return ptr;
}
int main2(int argc, char **argv)
{
    char str1[]={"Hello!"};//char* str1 = {"Hello!"}
    char str2[]={"World!"};//char* str2 = {"World!"}
    printf("%s\n",strcpy(str2,str1));
    printf("%s\n",str2);
    return 0;
}
*/

// int m[3][3] =
// {
//     {1, 2, 3},
//     {4, 5, 6},
//     {7, 8, 9}
// };
// int *p1;
// int (*p2)[3];
// p1 = m[2];
// p2 = m + 2;
// p1--;
// p2--;
// printf ("%d %d\n", *p1, **p2);


// Написать только одну функцию. Всю программу отправлять не надо. Вывести в
// порядке возрастания цифры, входящие в строку. Цифра - количество. Функция
// должно строго соответствовать прототипу:
// void print_digit(char s[])
/*
void print_digit(char s[]) 
{
    int count[10] = {0}; // считаем сколько цифр в массив
    for (int i = 0; s[i] != '\0'; i++) //читаем до конца поскольку в конце 0?
    {
        if (s[i] >= '0' && s[i] <= '9') 
        { 
            int digit = s[i] - '0'; // преобразование символа в цифру вычитаением ноля
            count[digit]++; // увеличение счетчика для данной цифры
        }
    }

    for (int i = 0; i < 10; i++) // вывод количества цифр в порядке возрастания
    {
        if (count[i] > 0) // если цифра встречается хотя бы один раз
        { 
            printf("%d - %d\n", i, count[i]); // вывод цифры и ее количество
        }
    }
}

int main() 
{
    //enum {BUFFER_SIZE = 1000};
    //char buffer[BUFFER_SIZE];
    char s[10] = {0};
    printf("Enter array: ");
    scanf("%s", s); 
    printf("%s\n", s);
    print_digit(s);


    return 0;
}
*/


void bubble_sort(int a[])
{
    //size_t buf;
    int tmp;
    for (int i = 1; i < 10; i++)
    {
        for (int j = 1; j < 10; j++)
        {
            if (a[j] > a[j-1]) 
            {
                tmp = a[j];
                a[j] = a[j-1];
                a[j-1] = tmp;
            }
        }
    }
}

int main() 
{
    //int count = 0;
    //enum {BUFFER_SIZE = 1000};
    //char buffer[BUFFER_SIZE];
    int s[10] = {0};
    printf("Enter array: ");
   for (int i = 0; i < 10; i++) 
    {
        scanf("%d", &s[i]);
    }
        
    bubble_sort(s);
    // printf("sort array:\n");
    // for (int i = 0; i < 10; i++) 
    // {
    //     printf("%d ", s[i]);
    // }

    for (size_t i = 0; i < 9; i++)
    {
        if (s[i] - 1 != s[i+1])
        {
            printf("%d\n", (s[i] - 1));
        }
        
    }
    
    return 0;
}
