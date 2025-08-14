#include "main.h"

/**
*_strlen - returns lenth of string
*@s: - string
*Return: lenth of string
*/
int _strlen(char *s)
{
	int i = 0, count = 0;

	while (s[i])
	{
		i++;
		count++;
	}
	return (count);
}
