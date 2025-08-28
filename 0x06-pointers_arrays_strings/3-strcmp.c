#include "main.h"

/**
*_strcmp - compare stwo strings
*@s1: first string
*@s2: second string
*Return: integer value
*/
int _strcmp(char *s1, char *s2)
{
	int value = 0, i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			value = s1[i] - s2[i];
	}
	return (value);
}
