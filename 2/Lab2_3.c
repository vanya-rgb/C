/*
* В массиве целых чисел вставить после каждого четного элемента
массива предшествующий ему нечетный элемент.
*/
#include <stdio.h>  
#include <time.h>
#include <locale.h>
#define _CRT_SECURE_NO_WARNINGS
#define SIZE 100

int main(void)
{
    setlocale(LC_ALL, "Russian");

    int n, shift = 0;
    int a[SIZE];
    int i, j, ch;

    printf("Колличество эл. массива(N): "); scanf_s("%i", &n);

    if (n <= 0 || n > SIZE/2)
    {
        printf("N out of range!\n");
        return 0;
    }

    for (i = 0; i < n; i= i+1)
    {
        printf("a[%d]=", i);
        scanf_s("%d", &a[i]);
    }
    i = 0;
    while (i < n)
    {
        if (a[i] % 2 == 0)
        {
            
            if (a[i - 1] % 2 == 1)
            {
                for (j = n + 1; j > i; j = j - 1)
                {
                    a[j] = a[j - 1];
                }
                ch = a[i - 1];
                a[i + 1] = ch;
                n = n + 1;
            }
        }
        i = i + 1;
    }
    
    printf("%s\n", "Измененный массив: ");
    for (i = 0; i < n; i = i + 1)
    {
        printf("a[%d]=%d\n", i, a[i]);
    }

}