#include <stdio.h>

/**
*main - entry point
*
*Return: 0
*/
int main(void)
{
		int a, b;

	for (a = 48; a <= 57; a++)
	{
		for(b = 48; b <= 57; b++)
		{
			if (a == b)
			continue;
			putchar(a);
			putchar(b);
			putchar(44);
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
