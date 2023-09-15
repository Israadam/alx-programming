#include "main.h"
/**
 * print_number - print an integer
 * @n: paramete, integer value/ input
 *
 */
void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		_putchar(45);
		i = -i;
	}
	if (i / 10)
	{
		print_number(i / 10);
	}
}
