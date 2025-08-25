#include "main.h"

/**
*_strncat - concatenates two strings
*@dest: destination string
*@src: source string
*@n:number of characters to be concatenated
*Return: concatenated string
*/
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	n = 0;
	while (src[j] != n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return(dest);
}
