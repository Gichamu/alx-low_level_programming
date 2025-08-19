#include "main.h"

/**
*rev_string - reverse a string
*@s: string to be reversed
*Return: reversed string
*/
void rev_string(char *s)
{
	int i = 0, l = 0;
	char ch;

	while (s[i] != '\0')
	{
		i++;
		l++;
	}
	for (i = 0; i < l / 2; i++)
	{
		ch = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - i] = ch;
	}
}
