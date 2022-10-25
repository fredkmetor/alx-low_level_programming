#include "main.h"

/**
* print_alphabet_x10 - Print alphabets x10
*
* Return: Always 0 (success)
*/
void print_alphabet_x10(void)
{
	int c = 0;

	while (c < 10)
	{
		char al;

		for (al = 'a'; al <= 'z'; al++)
		{
			_putchar(al);
		}
		_putchar('\n');
		c++
	}
	return (0);
}
