/*
* Ќайти количество нечетных делителей заданного натурального числа, больших
заданного k.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, "Russian");
	int num, k;
	int sum = 0;
	printf("¬ведите натуральное число: "); scanf("%d", &num);
	printf("¬ведите k: "); scanf("%d", &k);
	if (num < k)
	{
		printf("'k' должно быть меньше делимого");
		return 0;

	}

	for (int del=k+1; del < num + 1; del = del + 1)
	{
		if (del % 2 != 0 && num % del == 0)
			sum = sum + 1;
	}

	printf("sum = %d\n", sum);
}