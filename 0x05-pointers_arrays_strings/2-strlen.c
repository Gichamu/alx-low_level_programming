#include "main.h"

/**
*_strlen - returns lenth of a string
*@s: pointer taken as function parameter
*Return: lenth of a string
*/
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	return (i);
}
