#include <stdio.h>
#include "main.h"

/**
*print_to_98 - prints natural numbers to 98
*@n: integer
*Return: natural numbers to 98
*/
void print_to_98(int n)
{
	while (n <= 98)
	{
		if (n == 98)
		break;
		printf("%d, ", n);
		n++;
	}
	while (n == 98)
	{
		if (n == 98)
		break;
		printf("%d, ", n);
	}
	while (n >= 98)
	{
		if (n == 98)
		break;
		printf("%d, ", n);
		n--;
	}
}

