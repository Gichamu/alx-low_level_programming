#include "main.h"

/**
*rot13 - substitute letter with 13 letters after it in alphabet
*@s: pointer to string
*Return: modified string
*/
char *rot13(char *s)
{
	int i, j;
	char letter[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot_13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; letter[j] != '\0'; j++)
			{
				if (s[i] == letter[j])
				{
					s[i] = rot_13[j];
					break;
				}
			}
	}
	return (s);
}
