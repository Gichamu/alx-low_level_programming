#include <stdio.h>
#include "main.h"

/**
*print_to_98 - prints natural numbers to 98
*
*Return: natural numbers to 98
*/
void print_to_98(int n)
{
	while (n < 99)
	{
	printf("%d, ", n);
	n++;
	}
	while (n == 98)
	{
		printf("%d, ", n);
	}
	while (n >98)
	{
		printf("%d, ", n);
		n--;
	}
}

