#include "main.h"

/**
* _islower - check for lowercase charater.
*
* @c: is the character to be checked whether a lower case letter
*
* Return: 1 if c is lowercase or 0 if otherwise
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
