#include "main.h"

/**
* print_last_digit - print the last digit of a number
* @x: x is the integer whos last digit will be printed
*
* Return: Always 0 (success)
*/
int print_last_digit(int x)
{

	if (x  >= 0 && x < 10)
	{
		_putchar(x + '0');
		return (x);
	}
	else
	{
		_putchar((x % 10) + '0');
		return (x);
	}

}
