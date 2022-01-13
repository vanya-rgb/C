/*
* ƒана действительна€ квадратна€ матрица пор€дка n. Ќайти наибольшее
из значений элементов, расположенных в заштрихованной области матрицы
и наименьшее из значений элементов, расположенных вне заштрихованной
области матрицы.
            * * \ \ 
            * \ \ \
            \ \ \ * 
            \ \ * *
*/
#include <stdio.h>  
#include <time.h>
#include <locale.h>
#define _CRT_SECURE_NO_WARNINGS
#define SIZE 100

int main(void)
{
    setlocale(LC_ALL, "RUS");

    int n, min = 1000, max = 0;
    int sum = 0;

    int N = 0;
    double m[4][4] = {
        { 6, 7, 0, 1 },
        { 3, 9, 7, 4 },
        { 0, 8, 2, 4 },
        { 2, 1, 2, 6 }
    };

    for (int i = 0; i < 4; i = i + 1)
        for (int j = 0; j < 4; j = j + 1)
            if ((i<2 && j < 1 || i < 1 && j < 2)|| (i > 1 && j > 2 || i > 2 && j > 1))
            {
                if (m[i][j] > max)
                    max = m[i][j];
                
            }
            else
            {
            
                if (m[i][j] < min)
                    min = m[i][j];
            }
    printf("Max= %d\nMin = %d", max, min);
            
}