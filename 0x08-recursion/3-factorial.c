#include "main.h"

/**
*factorial - returns factorial of a number
*@n: function argument
*Return: factorial of a given number
*/
int factorial(int n)
{
	if (n <= 1)
		return (1);

	factorial(n - 1);
	return (n * factorial(n - 1));
}

