#include  "main.h"
/**
 * print_alphabet_x10 - print alphabet 10 times
 *
 * Return: void
 */


void print_alphabet_x10(void)
{
	char alphabet =  'a';
	int number = 0;

	while (number < 10)
	{
		alphabet = 'a';

		while (alphabet <= 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}
		_putchar ('\n');
		number++;		
	}
}
