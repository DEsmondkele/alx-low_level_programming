#include "main.h"

/**
 * main - prints _putchar
 * Description: prints a string "_putchar"
 * Return: Alwayys 0 (success)
 */
int main(void)
{
	char tmp[9] = "_putchar";
	int j = 0;

	for (j = 0; j < 8; j++)
	{
		_putchar (tmp[j]);
	}
	_putchar ('\n');

	return (0);
}
