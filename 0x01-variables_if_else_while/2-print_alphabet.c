#include <stdio.h>

/**
*main - useputchar to print lowercase alphabet
*
*Return: 0
*/
int main(void)
{
	char alph = 'a';

	while (alph <= 'z')
	{
		putchar(alph);
		alph++;
	}
	putchar('\n');
	return (0);
}
