#include <stdio.h>

/**
*main - entry point
*
*Return: 0 (success)
*/
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
		putchar(i);
	for (i = 0x61; i <= 0x66; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
