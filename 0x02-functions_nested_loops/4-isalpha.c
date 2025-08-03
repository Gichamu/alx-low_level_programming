#include "main.h"

/**
*_isalpha - checks for alphabet
*@c: the function parameter
*Return:1 if alphabet and 0 if otherwise
*/
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
