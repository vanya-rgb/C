/*ƒан массив действительных чисел размерности n. ѕолучить удвоенную
сумму всех положительных элементов массива и удвоенное произведение
всех отрицательных элементов массива, расположенных после
максимального члена последовательности.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <locale.h>
#define SIZE 100

int main(void)
{
	setlocale(LC_ALL, "Russian");

	int n, v, max = 0, ind = 0;
	int sum_positive = 0, sum_negative = 1;
	int a[SIZE];

	printf("N="); scanf("%i", &n);

	if (n <= 0 || n > SIZE)
	{
		printf("N out of range!\n");
		return 0;
	}

	for (int i = 0; i < n; i = i + 1)
	{
		printf("a[%d] = ", i); scanf("%i", &v);
		a[i] = v;
		if (a[i] >= max)
		{
			max = a[i];
			ind = i;
		}
	}
	printf("ind = %d\n", ind);

	for (int i = ind+1; i < n; i++)
	{
		if (a[i] >= 0)
		{
			sum_positive = sum_positive + a[i];
		}
		else
		{
			sum_negative = sum_negative * a[i];
		}
	}

	printf("положительные = %d, отрицательные = %d", sum_positive * 2, sum_negative * 2);
}


for (j = n - 1; j > i; j = j - 1)
{
	a[j] = a[j - 1];
	n = n + 1;
}