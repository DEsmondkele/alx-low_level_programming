#include "main.h"

/**
 * print_last_digit - prints last digit of number
 * @i: i is an integer
 *
 * Description: prints the last digit of a number
 *
 * Return: integer
 */

int print_last_digit(int i)
{
	int num = i % 10;

	if (i < 0)
		num *= -1;

	_putchar (num + '0');

	return (num);
}
