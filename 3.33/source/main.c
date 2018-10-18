#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int x, y;
	printf("Lengh and breadth is: \n");
	scanf_s("%d%d", &x, &y);

	for (int i = 1; i <= x; i++) 
	{
		for (int j = 1; j <= y; j++)
		{
			if (j == 1 || j == y || i == 1 || i == x )
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	system("pause");
	return 0;
}