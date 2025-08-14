#include <stdio.h>

int main(void)
{
	int i = 0;
	int count = 0;
	char name[30] = "learning software dev";;

	while (name[i] != '\0')
	{
		i++;
		count++;
	}
	printf("count is %d\n", count);
	return (0);
}
