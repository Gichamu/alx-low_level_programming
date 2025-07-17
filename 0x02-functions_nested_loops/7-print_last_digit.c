#include "main.h"

/**
*print_last_digit - prints last digit of a number
*@i: input number as an integer
*Return: last digit of a number
*/
int print_last_digit(int i)
{
	int n = i % 10;

	if (n > 0)
	{
		_putchar(n + 48);
	}
	else
	{
		_putchar((n * -1) + 48);
	}
}
