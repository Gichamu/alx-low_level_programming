#include <stdio.h>

/**
*main - entry point
*
*Return:0
*/
int main(void)
{
	int a, b;

	for (a = 0x30; a <= 0x39; a++)
	{
		putchar(a);
	}
	for (b = 0x61; b <= 0x66; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
