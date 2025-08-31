#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: pointer to the array
 * @n: number of elements in the array
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i, s;

	for (i = 0; i < n / 2; i++)
	{
		s = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = s;
	}
}
