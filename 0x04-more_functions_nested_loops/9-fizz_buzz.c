#include "main.h"
#include <stdio.h>

/**
 * main - Fizz for multiples of 3 and Buzz for multiples of 5 FizzBuzz for both
 *
 *
 * Return: Always 0
 */
int main(void)
{
	int n = 1;

	while (n < 101)
	{
		if (n % 15 == 0)
		{
			printf("%s", "FizzBuzz");
		}
		else if (n % 3 == 0)
		{
			printf("%s", "Fizz");
		}
		else if (n % 5 == 0)
		{
			printf("%s", "Buzz");
		}
		else
		{
			printf("%d", n);
		}

		if (n != 100)
		{
		printf(" ");
		}
		n++;
	}
	printf("\n");
	return (0);
}
