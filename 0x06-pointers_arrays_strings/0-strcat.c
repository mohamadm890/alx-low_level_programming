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
int len = 0;
int i;
int lensrc = 0;
for (i = 0; dest[i] != '\0'; i++)
{
len++;
}
for (i = 0; src[i] != '\0'; i++)
{
lensrc++;
}
for (i = 0; i <= lensrc; i++)
{
dest[len + i] = src[i];
return (dest);
}
}
