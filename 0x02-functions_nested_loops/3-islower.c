#include "main.h"

/**
 * _islower -checks for alphabet in lowercase
 * @character: an ASCII char
 *
 * Return: 1 if lowercase
 */

int _islower(int character)
{
	if (character >= 'a' && chracter <= 'z')
		return (1);
	else
		return (0);
}
