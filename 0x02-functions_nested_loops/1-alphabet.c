#include "main.h"

/**
 * print_alphabet - Print lower case alphabet
 *
 *Return: Always 0 (success)
 */
void print_alphabet(void)
{
	int al;

	for (al = 'a'; al <= 'z'; al++)
	{
		_putchar(al);

	}
	_putchar('\n');
	return (0);
}
