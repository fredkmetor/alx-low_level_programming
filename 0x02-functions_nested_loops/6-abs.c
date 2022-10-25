#include "main.h"

/**
* _abs - compute the absolute value of an integer
* @x: x is an integer who's absolut value will be returned
* when this function is invocated
*
* Return: The absolute value of an integer
*/
int _abs(int x)
{
	if (x > 0)
	{
		return (x);
	}
	else
	{
		return (-x);
	}
}
