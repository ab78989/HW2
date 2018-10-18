#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	while (1)
	{
		int salary, hours, sum, rate;
		int i;
		printf("Enter your salary code(-1 to end): ");
		scanf_s("%d", &i);
		if (i == -1)
		{
			break;
		}
		if (i==1)
		{
			printf("Enter weekly salary: ");
			scanf_s("%d", &salary);
			sum = salary;
			printf("Your  salary is:%d ", sum);
		}
		else if (i==2)
		{
			printf("Enter hourly salary: ");
			scanf_s("%d", &salary);
			printf("Enter hours of worked: ");
			scanf_s("%d", &hours);
			if (hours > 40)
			{
				sum = 40 * salary + (hours - 40)*1.5*salary;
				printf("Your  salary is:%d", sum);
			}
			else
			{
				sum = hours * salary;
				printf("Your  salary is:%d:", sum);
			}
		}
		else if (i==3)
		{
			printf("Enter weekly sales: ");
			scanf_s("%d", &salary);
			sum = 250 + salary * 5.7/100;
			printf("Your  salary is:%d", sum);
		}
		else if (i == 4)
		{
			printf("Enter your piece: ");
			scanf_s("%d", &salary);
			printf("Enter your rate: ");
			scanf_s("%d", &rate);
			sum = rate * salary;
			printf("Your  salary is:%d", sum);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}