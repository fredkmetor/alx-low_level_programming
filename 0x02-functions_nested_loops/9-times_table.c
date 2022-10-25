#include "main.h"

/**
* times_table - Print the 9 times table,
* starting with 0.
*
* Return: Always 0 (success)
*/
void times_table(void)
{
	int n, m, ans;

	for (n = 0; n < 10; n++)
	{
		_putchar('0');

		for (m = 1; m < 10; m++)
		{
			_putchar(',');
			_putchar(' ');

			ans = m * n;

				if (ans <= 9)
				{
					_putchar(' ');
				}
				else
				{
					_putcahr((ans / 10) + '0');
					_putchar((ans % 10) + '0');
				}
		}
		_putchar('\n');
	}
	return (0);
}
