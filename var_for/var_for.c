#include <stdio.h>
#include <locale.h>
#include <stdbool.h>
#include "head.h"


void menu(int task_count)
{
	int i;
	for (i = 1; i <= task_count; i++)
	{
		printf("%d. Задание %d\n", i, i);
	}
	printf("%d. Выход \n", i);
}

void wait_for_click(void)
{
	printf("Нажмите любую кнопку для выхода в меню \n");
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
				printf("Введите n = ");
				scanf_s("%d", &n);
				sum = summ(n);
				printf("Сумма первых %d элементов равна %lf \n", n, sum);
				wait_for_click();
				break;
			case '2':
				system("cls");
				printf("Введите точность вычисления eps = ");
				scanf_s("%lf", &eps);
				sum = summ2(eps);
				printf("Сумма элементов последовательности с точностью eps = %lf равна %lf \n", eps, sum);
				wait_for_click();
				break;
			case '3':
				system("cls");
				printf("Введите количество членов последовательности n = ");
				scanf_s("%d", &n);
				printf("Исключать каждый элемент k = ");
				scanf_s("%d", &k);
				print(n, k);
				wait_for_click();
				break;
			case '4':
				system("cls");
				printf("Введите eps = ");
				scanf_s("%lf", &eps);
				n = findFirstElement(eps);
				printf("Номер первого элемента последовательности, для которого выполняется |a(i)| <= eps : i = %d \n", n);
				wait_for_click();
				break;
			case '5':
				system("cls");
				printf("Введите eps = ");
				scanf_s("%lf", &eps);
				n = findFirstNegativeElement(eps);
				printf("Номер первого отрицательного элемента последовательности, для которого выполняется |a(i)| <= eps : i = %d \n", n);
				wait_for_click();
				break;
			case '6':
				close_flag = false;
				break;
		}

	}
	
	
}