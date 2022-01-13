#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <locale.h>
#define PI 3.14159

int main(void)
{
	setlocale(LC_ALL, "Russian");
	double a, b, x, y, z;

	printf("Введите x, y, z = "); 
	scanf("%lf%lf%lf", &x, &y, &z);
	
	if (z < -1 || z > 1 || y = PI/2)
	{
		printf("Невозможно вычислить значение!\n");
		return 0;
	}
		
	a = (1 + fabs(x + y) / pow(x, 8) - sqrt(z) / (z + 1)) / (sin(y + PI / 2));
	b = (pow(x + y + z, 3) / atan(pow(z, 2))) - log(1 + x);

	printf("a=%lf b=%lf", a, b);

	_getch();

}
