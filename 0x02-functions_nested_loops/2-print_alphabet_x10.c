#include "main.h"

/**
*print_alphabet_x10 - print the alphabet 10 times in lowercase
*Return: 0
*/
void print_alphabet_x10(void)
{
	int count = 0;
	int a = 97;

	while (count <= 9)
	{
		while (a <= 122)
		{
			putchar(a);
			a++;
		}
		putchar(count);
		count++;
	}
}
