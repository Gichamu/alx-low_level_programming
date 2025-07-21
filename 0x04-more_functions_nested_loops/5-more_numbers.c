#include "main.h"

/**
*more_numbers - print numbers to 14
*
*Return: numbers from 1 to 14
*/
void more_numbers(void)
{
	int a;
	int b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			_putchar(b + 48);
		}
	_putchar('\n');
	}
}
