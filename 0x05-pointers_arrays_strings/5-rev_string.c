#include "main.h"

/**
 * rev_string - Function
 * @s: ptr
 */

void rev_string(char *s)
{
	char *tmp = s, *cpy = s, *newM;
	int cnt = 0, dec, ind;

	while (*tmp)
	{
		cnt++;
		tmp++;
	}

	newM = malloc((cnt - 1) * sizeof(char));
	if (newM == NULL)
		printf("");

	for (ind = 0, dec = cnt - 1; dec >= 0; dec--, ind++)
		newM[ind] = cpy[dec];

	for (ind = 0; ind < cnt; ind++)
		s[ind] = newM[ind];
}
