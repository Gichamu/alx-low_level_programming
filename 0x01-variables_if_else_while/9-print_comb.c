#include <stdio.h>

/**
*main - entry point
*
*Return: 0
*/
int main(void)
{
	int a;

	for (a = 48; a <= 57; a++)
	{
		putchar(a);
		if (a == 57)
		break;
		putchar(44);
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
