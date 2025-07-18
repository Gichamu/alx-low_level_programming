#include <stdio.h>

/**
*main - entry point
*
*Return: 0
*/
int main(void)
{
	int a = 97;

	while (a <= 122)
	{
		if (a != 101 && a != 112)
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
