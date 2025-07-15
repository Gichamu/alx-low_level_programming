#include <stdio.h>

/**
*main - entry point
*
*Return: always 0 (success)
*/
int main(void)
{
	int a = 48;
	int b = a+1;

	while (a <= 57)
	{
		putchar(a);
		if (b != 57)
		{
			while (b <= 57)
			{
				putchar(b);
				b++;
			}
		}
		else
		a++,
			putchar(',');
			putchar(' ');
	}
	putchar('\n');
	return (0);
}
