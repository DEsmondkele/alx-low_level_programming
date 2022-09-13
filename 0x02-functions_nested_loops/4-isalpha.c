#include "main.h"

/**
 * _isalpha - the program checks for alphabet chracters
 * @alphabet: alphabet is an ascii characters
 *
 * Return: 1 if is alphabet character
 */

int _isalpha(int alphabet)
{
	if(alphabet >= 'a' && alphabet <= 'z')
	{
		return (1);
	}
	else if (alphabet >= 'A' && alphabet <= 'Z')
	{
		return (1);
	}
	else
	{
	 return (0);
	}
}
