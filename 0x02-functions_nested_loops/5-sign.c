#include "main.h"

/**
* print_sign - prints sign of a number
*@n: function parameter
*Return: 1 if greater than zero, 0 if zero and - if less than 0
*/
int print_sign(int n)
{
	if (n > 48)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(0);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
