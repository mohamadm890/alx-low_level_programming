#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char  _strncat(char *dest, char *src, int n)
{
int f = 0;
while (dest[f] != '\0')
{
f++;
}
int m = 0;
while (src[m] != '\0' && m < n)
{
dest[f] = src[m];
f++;
m++;
}
dest[f] = '\0';
return (dest);
}
