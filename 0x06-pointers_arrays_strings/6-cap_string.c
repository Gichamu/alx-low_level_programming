#include "main.h"

/**
*cap_string - capitalize first letter of word
*@s: pointer to string
*Return: pointer to modified string
*/
char *cap_string(char *s)
{
	int i = 0, j = 0;
	char spec[] = " ,;.!?(){}";

	while (s[i] != '\0')
	{
		if (s[0] >= 97 && s[0] <= 122)
			s[0] = s[0] - 32;
		for (j = 0; spec[j] != '\0'; j++)
		{
			if (s[i] == spec[j] && s[i + 1] >= 97 && s[i + 1] <= 122)
			{
				s[i + 1] = s[i + 1] - 32;
				break;
			}
		}
		i++;
	}
	return (s);
}
