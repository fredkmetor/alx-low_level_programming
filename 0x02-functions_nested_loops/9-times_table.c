#include "main.h"

/**
* times_table - Print the 9 times table,
* starting with 0.
*
* Return: Always 0 (success)
*/
void times_table(void)
{
	int i, j, ans;/*variables for row, colon, and value respectively*/

	i = 0;
	while (i < 10)/*calculate the number of rows*/
	{
		j = 0;
		while (j < 10)
		{
			ans = i * j;
			j++;
				if (ans > 9)
				{
				_putchar((ans / 10) + '0');
				_putchar((ans % 10) + '0');
				_putchar(',');
				_putchar(' ');
				}
				else
				{
				_putchar(ans + '0');
				_putchar(',');
				_putchar(' ');
				}
		}
		_putchar('\n');
		i++;
	}

}
