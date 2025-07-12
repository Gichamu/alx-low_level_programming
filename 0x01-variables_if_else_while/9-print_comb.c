#include <stdio.h>

/**
*main - entry point
*
*Return: always 0 (sucess)
*/
int main(void)
{
	int a = 48;

	while (a <= 57)
	{
		putchar(a);
		putchar(',');
		putchar(' ');
		a++;
	}
	putchar('\n');
	return (0);
}
