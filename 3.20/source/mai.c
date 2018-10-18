#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float hours,rate,salary;

	while (1)
	{
		printf("Enter # of hours worked(-1 to end): ");
		scanf_s("%f", &hours);
		if (hours == -1)
		{
			break;
		}
		printf("Enter hourly rate of the worker: ");
		scanf_s("%f", &rate);
		if (hours > 40)
		{
			salary= 40 * rate + (hours - 40)*1.5*rate;
		}
		else
		{
			salary = hours * rate;
		}
		printf("Salary is:%f", salary);
		printf("\n");
	}
	system("pause");
	return 0;
}