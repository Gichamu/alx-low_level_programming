#include "main.h"

/**
*print_sign - print sign of a number
*@n: random number
*Return: 0
*/
int print_sign(int n)
{
	if (n >= 49 && n <= 57)
	{
		return (1);
		_putchar('+');
	}
	else if (n == 48)
	{
		return (0);
		_putchar('0');
	}
	else
	{
		return (-1);
		_putchar('-');
	}
	_putchar('\n');
}
