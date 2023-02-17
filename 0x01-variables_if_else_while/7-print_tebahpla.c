#include <stdio.h>
/**
 * main - prints the lowercase alphabet in reverse, followed by a new line
 *
 * Return: 0
*/
int main(void)
{
	char d;

	for (d = 'z'; d >= 'a'; d--)
		putchar(d);

	putchar('\n');

	return (0);
}
