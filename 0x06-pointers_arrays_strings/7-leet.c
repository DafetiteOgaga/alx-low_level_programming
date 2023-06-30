#include <stdio.h>

/**
 * leet - function
 * @ch: char ptr
 * Return: ptr
 */

char *leet(char *ch)
{
	int i = 0, j = 0;
	char *let = "aAeEoOtTlL";
	char *num = "4433007711";

	while (ch[i])
	{
		for (; let[j] != '\0'; j++)
		{
			if (ch[i] == let[j])
				ch[i] = num[j];
		}
		i++;
	}
	return (ch);
}
