#include "main.h"

/**
*reverse_array - reverses an array
*@a: pointer to array
*@n: number of elements in the array
*/
void reverse_array(int *a, int n)
{
	int i = 0, s;

	while (a[i] < n / 2)
	{
		s = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = s;
		i++;
	}
}
