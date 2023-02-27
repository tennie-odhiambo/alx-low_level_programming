#include "main.h"

/**
 * rev_string- reverses a string.
 * @s: input character
 * Return: 0
*/
void rev_string(char *s)
{
	int i;
	int d = 0;
	char rv = s[0];

	while (s[d] != '\0')
		d++;
	for (i = 0; i < d; i++)
	{
		d--;
		rv = s[i];
		s[i] = s[d];
		s[d] = rv;
	}
}
