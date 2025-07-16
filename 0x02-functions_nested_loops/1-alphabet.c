#include "main.h"

/**
*print_alphabet - print_alphabet in lower case
*Return: always 0
*/
void print_alphabet(void)
{
	int a = 97;

	while (a <= 122)
	{
	_putchar(a);
	a++;
	}
	_putchar('\n');
}
