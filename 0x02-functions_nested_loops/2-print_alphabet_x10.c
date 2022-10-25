#include "main.h"

/**
* print_alphabet_x10 - Print alphabets x10
*
* Return: Always 0 (success)
*/
void print_alphabet_x10(void)
{
	int cl = 0;

	for (cl = 0; cl < 10; cl++)
	{
		char al;

		for (al = 'a'; al <= 'z'; al++)
		{
			_putchar(al);
		}
		_putchar('\n');
	}
	return (0);
}
