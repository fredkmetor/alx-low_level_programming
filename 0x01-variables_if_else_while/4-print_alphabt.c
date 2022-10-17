#include <stdio.h>
/**
 * main -Entry point
 * D:prints the alphabet in lowercase, followed by a new line
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
	ch++;
	}
	putchar('\n');
	return (0);
}
