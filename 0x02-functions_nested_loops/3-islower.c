#include "main.h"

/**
 * _islower -checks for alphabet in lowercase
 * @char: an ASCII char
 *
 * Return: 1 if lowercase
 */

int _islower(int char)
{
	if (char >= 'a' && char <= 'z')
		return (1);
	else
		return (0);
}
