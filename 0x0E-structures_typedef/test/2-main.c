#include <stdio.h>
#include "../dog.h"

/**
 * main - check the code for Alx Students.
 *
 * Return: Always 0.
 */
int main(void)
{
	struct dog my_dog;

	my_dog.name = "Bobby";
	my_dog.age = 4.5;
	my_dog.owner = "Sam";
	print_dog(&my_dog);
	return (0);
}
