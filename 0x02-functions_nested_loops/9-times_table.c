#include "main.h"

/**
* times_table - Print the 9 times table,
* starting with 0.
*
* Return: Always 0 (success)
*/
void times_table(void)
{
	int r, c, ans;/*variables for row, colon, and value respectively*/

	for (r = 0; r < 10; r++)/*calculate the number of rows*/
	{
		_putchar('0');

		for (c = 0; c < 10; c++)
		{
			ans = c * r;
			if (c == 0)
			{
				_putchar(ans + '0');
			}
				else if (c != 0 && ans < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(ans + '0');
				}
					else if (ans >= 10)
					{
						_putchar(',');
						 _putchar(' ');
						_putcahar((ans / 10) + '0');
						_putchar((ans % 10) + '0');
					}
		}
		_putchar('\n');
	}
	return (0);
}
