#include "main.h"

/**
 * main - check the code.
 *
 * Return: always 0.
 */

int main(void)
{
	int s;

	s = _isalpha ('H');
	_putchar (s + '0');
	s = _isalpha ('o');
	_putchar (s + '0');
	s = _isalpha (108);
	_putchar (s + '0');
	s = _isalpha (';');
	-putchar (s + '0');
	_putchar ('\n');
	return (0);
}
