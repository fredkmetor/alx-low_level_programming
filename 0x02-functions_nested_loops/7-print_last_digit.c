#include "main.h"
/**
* print_last_digit - print the last digit of a number
* @x: x is the integer whos last digit will be printed
*
* Return: Always 0 (success)
*/
int print_last_digit(int x)
{
	int lasd = x % 10;

	if (lasd < 0)
	{
		lasd *= -1;
	}
	_putchar(lasd + '0');
	return (0);

}
