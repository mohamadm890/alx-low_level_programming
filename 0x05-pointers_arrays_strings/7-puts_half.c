#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
int len = strlen(str);
int mid = len / 2;
if (len % 2 == 1)
{
mid++;
}
for (int i = mid; i < len; i++)
{
_putchar("%c", str[i]);
}
_putchar('\n');
}
