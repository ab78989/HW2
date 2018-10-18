#include<stdio.h>
#include<stdlib.h>


int main(void)
{
	for (int i = 1; i <= 500; i++)
	{
		for (int j = 1; j <=500; j++)
		{
			for (int k = 1; k <=500; k++)
			{
				if ((j*j + k*k) == i*i)
				{
					printf("side 1: %d\tside 2: %d\tside 3: %d\n", j, k, i);
				}
			}
		}
	}
	system("pause");
	return 0;
}