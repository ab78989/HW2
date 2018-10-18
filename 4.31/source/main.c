#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, j, k,s;
	for (i = 1; i <= 5; i++)
	{
			for (k = 1; k <= 5 - i; k++)
			{
				printf(" ");
			}
			for (s = 1; s <= (i * 2 - 1); s++)
			{
				printf("*");
			}
		printf("\n");
	}
	for (i = 5; i>= 1; i--)
	{
		for (k = 1; k <= 5 - i; k++)
		{
			printf(" ");
		}
		for (s = 1; s <= (i * 2 - 1); s++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	system("pause");
	return 0;
}