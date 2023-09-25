#include "main.h"
/**
  * _strstr - main function
  *
  * @needle: function parameter
  *
  * @haystack: function parameter
  *
  * Return: Always 0.
  */
char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *n = haystack;
char *m = needle;
while (*n == *m && *m != '\0')
{
n++;
m++;
}
if (*m == '\0')
return (haystack);
}
return (0);
}
