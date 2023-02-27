#include "main.h"
#include <string.h>

/**
 * print_rev- prints a string, in reverse, followed by a new line
 * @s:The string to print
*/
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
