#include <stdio.h>
/**
 * main - prints all single digit numbers of base 10 starting from 0
 *
 * Return: 0
*/
int main(void)
{
	int c;

	for (c = 0; c < 10; c++)
		putchar((c % 10) + '0');

	putchar('\n');
	return (0);
}
