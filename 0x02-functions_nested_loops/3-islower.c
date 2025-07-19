#include "main.h"

/**
*_islower - checks for lowercase character
*@c: argument passed to the function
*Return: 1 if c is lwe case and 0 if otherwise
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
