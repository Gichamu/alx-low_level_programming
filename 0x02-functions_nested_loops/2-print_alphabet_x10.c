#include "main.h"

/**
*print_alphabet_x10 - print the alphabet 10 times in lowercase
*Return: 0
*/
void print_alphabet_x10(void)
{
	int c;
	int a;

	for (c = 1; c <= 10; c++)
	{
		for (a = 97; a <= 122; a++)
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		c++;
	}
}
