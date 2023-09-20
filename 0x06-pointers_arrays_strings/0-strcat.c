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
int src = 0;
int i = 0;
for (i = 0; dest[i] != '\0'; i++)
{
len++;
}
for (i = 0; src[i] != '\0'; i++)
{
src++;
}
for (i = 0; i <= src; i++)
{
dest[len + i] = src[i];
return (dest);
}
}
