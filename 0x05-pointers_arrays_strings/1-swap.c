#include  "main.h"

/**
*swap_int - swaps integer values
*@a: integer to be swaped
*@b: integer to be swaped
*/
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
