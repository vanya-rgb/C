/*
* Задан массив действительных чисел. Все члены последовательности с
четными номерами, предшествующие первому по порядку члену со
значением max(a) домножить на max(a)
*/
#include <locale.h>
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 100

int main(void)
{
	setlocale(LC_ALL, "Russian");
	int a[] = { 24, 1, 34, 23, 120, 32, 1, 2 };
	int max = a[0], min = a[0];
	int ind;

	for (int i = 1; i < 8; i = i + 1)
	{
		if (max < a[i])
		{
			max = a[i];
			ind = i;
		}
	}

	for (int i = 0; i < ind; i = i + 1)
	{
		if (a[i] % 2 == 0)
			a[i] = max * a[i];
		printf("a[%d] = %d ", i, a[i]);
	}
}