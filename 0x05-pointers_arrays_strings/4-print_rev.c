#include <stdio.h>
#include "main.h"

/**
 * print_rev - function
 * @s: ptr
 */

void print_rev(char *s)
{
	int cnt = 1, ind;

	while (*s)
	{
		cnt++;
		s++;
	}

	/* printf("cnt=%d\n", cnt); */

	s--;

	for (ind = cnt; ind > 0; ind--, s--)
	{
		_putchar(*s);
	}
	_putchar('\n');
}
