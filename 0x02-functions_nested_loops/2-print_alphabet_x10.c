#include "main.h"

/**
*print_alphabet_x10 - print the alphabet 10 times in lowercase
*Return: 0
*/
void print_alphabet_x10(void)
{
	int count = 1;
	int a = 97;

	while (count <= 10)
	{
		while (a <= 122)
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		count++;
	}
}
