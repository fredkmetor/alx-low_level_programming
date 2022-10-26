#include "main.h"
/**
* print_last_digit - print the last digit of a number
* @x: x is the integer whos last digit will be printed
*
* Return: Always 0 (success)
*/
int print_last_digit(int x)
{
	int l;

	if (x < 10)
	{
		_putchar(x + '0')
	}
	else if (x < 0)
	{
		x = -x;
		l = x % 10;
		_putchar(l + '0');
	}
	else
	{
		l = x % 10;
		_putchar(l + '0');
	}

	return (l);

}
