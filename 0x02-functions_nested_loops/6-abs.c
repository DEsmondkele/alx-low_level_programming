#include "main.h"

/**
 * _abs - compute absolute value of an integer
 * Description; checks if a number is +ve, -ve or unsigned
 * @num: num is an integer
 *
 * Return: integer(-num,+num or num)
 */

int _abs(int num)
{
	if (num > 0)
	{
		return (num);
	}
	else if (num < 0)
	{
		return (-num);
	}
	else
	{
		return (num);
	}
}
