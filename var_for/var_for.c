#include <stdio.h>
#include <locale.h>
#include <stdbool.h>
#include "head.h"


void menu(int task_count)
{
	int i;
	for (i = 1; i <= task_count; i++)
	{
		printf("%d. ������� %d\n", i, i);
	}
	printf("%d. ����� \n", i);
}

void wait_for_click(void)
{
	printf("������� ����� ������ ��� ������ � ���� \n");
	getch();
}

void main(void)
{
	setlocale(LC_ALL, "Rus");
	_Bool close_flag = true;

	for(;close_flag;)
	{
		double sum, eps;
		int n, k;
		
		menu(5);
		switch (getch()){
			case '1':
				system("cls");
				printf("������� n = ");
				scanf_s("%d", &n);
				sum = summ(n);
				printf("����� ������ %d ��������� ����� %lf \n", n, sum);
				wait_for_click();
				break;
			case '2':
				system("cls");
				printf("������� �������� ���������� eps = ");
				scanf_s("%lf", &eps);
				sum = summ2(eps);
				printf("����� ��������� ������������������ � ��������� eps = %lf ����� %lf \n", eps, sum);
				wait_for_click();
				break;
			case '3':
				system("cls");
				printf("������� ���������� ������ ������������������ n = ");
				scanf_s("%d", &n);
				printf("��������� ������ ������� k = ");
				scanf_s("%d", &k);
				print(n, k);
				wait_for_click();
				break;
			case '4':
				system("cls");
				printf("������� eps = ");
				scanf_s("%lf", &eps);
				n = findFirstElement(eps);
				printf("����� ������� �������� ������������������, ��� �������� ����������� |a(i)| <= eps : i = %d \n", n);
				wait_for_click();
				break;
			case '5':
				system("cls");
				printf("������� eps = ");
				scanf_s("%lf", &eps);
				n = findFirstNegativeElement(eps);
				printf("����� ������� �������������� �������� ������������������, ��� �������� ����������� |a(i)| <= eps : i = %d \n", n);
				wait_for_click();
				break;
			case '6':
				close_flag = false;
				break;
		}

	}
	
	
}