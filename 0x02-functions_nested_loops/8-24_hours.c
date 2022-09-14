#include "main.h"

/**
* jack_bauer - prints every minute of the day
*
* Description: prints every minute of the day
*
* Return: void
*/

void jack_bauer(void)
{
	int hr_ten, hr_one, min_ten, min_one, hr_max;

	hr_ten = '0';
	hr_max = 58;
	while (hr_ten < '3')
	{
		if (hr_ten == '2')
		{
			hr_max = '4';
		}
		hr_one = '0';
		while (hr_one < hr_max)
		{
			min_ten = '0';
			while (min_ten < '6')
			{
				min_one = '0';
				while (min_one < 58)
				{
					_putchar (hr_ten);
					_putchar (hr_one);
					_putchar (':');
					_putchar (min_ten);
					_putchar (min_one);
					_putchar ('\n');
					min_one++;
				}
				min_one = '0';
				min_ten++;
			}
			min_ten = '0';
			hr_one++;
		}
		hr_one = '0';
		hr_ten++;
	}
}
