#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>


double x, f;

int main(void)
{
	setlocale(LC_ALL, "Russian");

	printf("¬ведите x: ");
	scanf_s("%lf", &x);

	if (x <= 2 && x >= -2)
	{
		f = pow(x, 2);
	}

	else 
	{
		f = 4;
	}
	printf("f(x)= %lf\n", f);
	_getch();
}