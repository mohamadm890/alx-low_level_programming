#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
int n = 0;
while (dest[n]=! '\0')
{
n++;
}
int m = 0;
while (src[m] =! '\0')
{
dest[n] = src[m];
n++;
m++;
}
dest[n] = '\0';
return (dest);
}
