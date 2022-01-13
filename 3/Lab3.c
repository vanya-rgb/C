/*
��� ��������� ���� INPUT.TXT. ��������� � ������ ����� ������������
����������� ����������� � ����������� ������ �(�, �)�, �{�, �}�, �[�, �]�.
������������ ���� (������). ��������� (��������� ��� �����������)
�������� � ���� OUTPUT.TXT.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>  
#include <time.h>
#include <locale.h>
#include <stdlib.h>

FILE* input, * output;

char symbol;
int len = 0, size = 2; num = 0;



int main(void)
{
	setlocale(LC_ALL, "Russian");
	char* a = (char*)malloc(size * sizeof(char));
	
	if ((input = fopen("input.txt", "r")) == NULL)
	{
		printf("������ ��� �������� input.txt \n");
		return 0;
	}
	while (fscanf(input, "%1s", &symbol) != EOF)
	{
		if (len == size)
		{
			size *= 2;
			a = (char*)realloc(a, size * sizeof(char));

			if (a == NULL)
			{
				printf("Bad alloc");
				return 0;
			}
		}

		printf("%c\n", symbol);
		if (symbol == '('|| symbol == '['|| symbol == '{')
		{
			a[len] = symbol;
			printf("�������� %c\n", a[len]);
			len++;
		}
		if (symbol == ')'|| symbol == ']'|| symbol == '}')
		{
			for (int i = 0; i < len; i++)
			{
				if (a[i] == '(' || a[i] == '[' || a[i] == '{')
				{
					for (int i = 0; i < len; i++)
					{
						a[i] = a[i + 1];
					}
				}
			}
			printf("������� ���-��\n");
		}
		
	}

	output = fopen("output.txt", "w");
	for (int i = 0; i < len; i++)
	{
		if (a[i] != "")
		{	
			fprintf(output, "���������");
		}
		else fprintf(output, "�����������");
		printf("%c ", a[i]);
	}

	fclose(input);
	fclose(output);
	free(a);
}