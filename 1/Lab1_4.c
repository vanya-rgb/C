#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <locale.h>
#define MAX 5

main(void)
{
	setlocale(LC_ALL, "Russian");
	int a[MAX];
	int i=0, sum = 0;

	for (int i =0; i < MAX; i++)	
	{
		scanf("%d", &a[i]);
		if (a[i] == 0)
			return sum;
		if (a[i] % 2 != 0)
			{
				sum = sum + 1;
			}


	}
	return sum; 
}
