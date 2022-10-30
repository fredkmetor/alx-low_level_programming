#include "main.h"

/**
 * print_line - draw a straight line
 * @n: number of times underscore is printed
 * Description: Can only use _putchar to print
 */
void print_line(int n)
{
	int c;

	c = 0;
	while (c < n)
	{
		if (c <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('_');
		}
		c++;
	}
	_putchar('\n');
}
