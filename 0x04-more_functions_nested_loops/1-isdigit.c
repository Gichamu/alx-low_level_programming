#include "main.h"

/**
*_isdigit - checks for a digit
*@c: integer
*Return: 1 if digit ansd 0 otherwise
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
