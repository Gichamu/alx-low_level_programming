#include <stdio.h>

int main(void)
{
	char s1[30], c;
	int l, i;
	l = strlen(s1);

	for (i = 0; i < l/2; i++)
	{
		s1[i] = c;
		s1[i] = s1[l-1-i];
		s1[l-1-i] = c;
		_putchar(s1[i]);
		return (0);
	}
}
