#include "main.h"

/**
*_strcat - concatenate two strings
*@dest: destination string
*@src: source string
*Return: destination string
*/
char *_strcat(char *dest, char *src)
{
	int i = 0, l1, l2, count = 0, count2 = 0;

	while (dest[i] != '\0')
	{
		i++;
		count++;
	}
	while (src[i] != '\0')
	{
		i++;
		count2++;
	}
	l1 = count;
	l2 = count2;
	for (i = 0; i <= l2; i++)
	{
		dest[l1 + i] = src[i];
	}
	_putchar('\n');
	return (dest);
}
