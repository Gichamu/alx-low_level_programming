#include "main.h"

/**
*main - entry point
*Description: print_alphabet
*Return: always 0
*/
void print_alphabet(void)
{
	int a = 97;

	while (a <= 122)
	{
	_putchar('a');
	a++;
	}
	_putchar('\n');
	return;
}
