#include "main.h"

/**
*print_alphabet_x10 - print the alphabet 10 times in lowercase
*Return: 0
*/
void print_alphabet_x10(void)
{
	int c = 0;
	int a;

	while (c <= 9)
	{
		a = 97;

		while (a <= 122)
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		c++;
	}
}
