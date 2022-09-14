#include <stdio.h>

/**
 * main - compute list of natural numbers of 3 & 5
 * Return: ALways 0 success.
 */

int main(void)
{
	int number, total;

	total = 0;

	for (number = 0; number < 1024; number++)
	{
		if (number % 3 == 0 || number % 5 == 0)
		{
			total +=number;
		}
	}
	printf("d\n", total);
	return (0);
}	
