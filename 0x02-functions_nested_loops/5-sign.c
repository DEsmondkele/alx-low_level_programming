#include "main.h"

/**
 * print_sign - prints signs character
 * @num: num is an signed integer
 *
 * Return: 1 returns +ve, 0 returns zero, -1 returns -ve
 */

int print_sign(int num)
{
	if (num > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (num == 0)
	{
		_putchar ('0');
		return (0);
	}
	else
	{
		_putchar ('-');
		return (-1);
	}
}
