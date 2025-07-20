#include <stdio.h>
#include "main.h"

/**
*print_to_98 - prints natural numbers to 98
*
*Return: natural numbers to 98
*/
void print_to_98(int n)
{
	if (n < 99)
	{
	printf("%d, ", n);
	n++;
	}
	else if (n == 98)
	{
		printf("%d, ", n);
	}
	else
	{
		printf("%d, ", n);
		n--;
	}
}

