#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <locale.h>

int i;
double sum = 1, e = 0.0005, new_sum = 0;

int main(void)
{
	setlocale(LC_ALL, "Russian");
	
	printf("Введите натуральное число i: ");
	scanf("%d", &i);

	for (int j = 0; j < 0; j++)
	{
		new_sum = 1 / (pow(4, j) + pow(5, (j+2)));
		if (new_sum < e)
		{
			break;
			return 0;
		}
		sum += new_sum;

	}

	printf("Результат: %lf ", sum);
}