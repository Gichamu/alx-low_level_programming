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
	{
		putchar(i);
		if (i == 57)
		break;
		putchar(44);
		putchar(32);
	}
	putchar('\n');
	return (0);
}
