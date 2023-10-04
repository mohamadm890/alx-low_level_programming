#include "main.h"
#include <stdlib.h>
/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
int a, n, b = 0, l = 0;
char *str;
if (ac == 0 || av == NULL)
return (NULL);
for (a = 0; a < ac; a++)
{
for (n = 0; av[a][n]; n++)
l++;
}
l += ac;
str = malloc(sizeof(char) * l + 1);
if (str == NULL)
return (NULL);
for (a = 0; a < ac; a++)
{
for (n = 0; av[a][n]; n++)
{
str[b] = av[a][n];
b++;
}
if (str[b] == '\0')
{
str[b++] = '\n';
}
}
return (str);
}
