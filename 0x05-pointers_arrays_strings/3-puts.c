#include "main.h"
/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: all str will be print
 */
void _puts(char *str)
{
for (int i = 0; str[i] != '\0'; i++)
{
_putchar("%c", str[i]);
}
_putchar("%c", '\n');
}
