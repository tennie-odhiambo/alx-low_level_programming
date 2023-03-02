#include "main.h"

/**
 * _strcat - appends the src string to the dest string
 * overwriting the terminating null byte (\0) at the end of dest
 *  and then adds a terminating null byte
 *  @dest:pointer to the string to append
 *  @src:string to be appended
 *
 *  Return: pointer to the resulting string dest
*/
char *_strcat(char *dest, char *src)
{
	int comma = 0, full = 0;

	while (dest[comma++])
		full++;
	for (comma = 0; src[comma]; comma++)
		dest[full++] = src[comma];
	return (dest);
}
