#include "main.h"

/**
*_abs - computes absolute value of an integer
*@int: data type and integer it takes as argument
*@i: integer input
*Return: 0
*/
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}
