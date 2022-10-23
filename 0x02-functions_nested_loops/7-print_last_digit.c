#include "main.h"
/**
 * *main- print the last digit of a number
 * *
 * *Return: Always 0 (success)
 * *
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
