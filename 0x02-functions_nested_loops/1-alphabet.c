#include "main.h"

/**
 * print_alphabet - alphabet a - z
 *
 * Return: void
 */

void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar (alphabet);
		alphabet++;
	}

	_putchar ('\n');
}
