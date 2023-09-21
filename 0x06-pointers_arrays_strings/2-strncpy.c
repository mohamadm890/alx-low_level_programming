#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncpy(char *dest, const char *src, int n)
{
if (dest == NULL || src == NULL || n == 0)
{
return (dest);
}
int i = 0;
while (i < n && src[i] != '\0')
{
dest[i] = src[i];
i++;
}
return (dest);
while (i < n)
{
dest[i] = '\0';
i++;
}
}
