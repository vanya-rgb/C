#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, "Russian");
	float a;
	int n;
	double sum = 0;
	printf("¬ведите a: ");
	scanf_s("%f", &a);
	printf("¬ведите n: ");
	scanf_s("%d", &n);


	for (int i = 0; i < n+1; i= i+1)
	{
		sum = sum + (1 / pow(a, pow(2, i)));
	}

	printf("–езультат: %lf ", sum);
}
