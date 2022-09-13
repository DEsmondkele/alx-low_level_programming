#include "main.h"

/**
 * main - prints _putchar
 * Description: prints a string "_putchar"
 * Return: Always 0 (Success)
 */
int main(void)
{	
	char tmp[9] = "_putchar";
	int j = 0;

	for (j = 0; j < 8; J++)
	{
		_putchar(tmp[j]);
	}
	_putchar('\n);

	return(0);
}
