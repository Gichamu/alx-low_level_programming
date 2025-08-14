#include "main.h"

/**
*print_rev - print string in reverse
*@s: string to be printed
*Return: reverse string
*/
void print_rev(char *s)
{
	int i, l;
	char c;
	l = _strlen(s);

	for (i = 0; i < l/2; i++)
	{
		c = s[i];
		s[i] = s[l-1-i];
		s[l-1-i] = c;
		_putchar(*s);
	}
}
