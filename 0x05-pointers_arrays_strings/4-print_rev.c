#include "main.h"
/**
 * print_rev - print en reversa.
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
int size = 0;
int i;
while (*s != '\0')
{
size++;
s++;
}
s--;
for (i = size - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
