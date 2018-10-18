#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float sales, salary;
	while (1)
	{
		printf("Enter sales in dollars(-1 to end): ");
		scanf_s("%f", &sales);

		if (sales == -1)
		{
			break;
		}
		salary = 200 + sales * 0.09;
		printf("Salary is: %f", salary);
		printf("\n");
	}
	system("pause");
	return 0;
}