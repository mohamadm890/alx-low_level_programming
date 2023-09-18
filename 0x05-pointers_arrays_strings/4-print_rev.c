#include "main.h"
/**
 * print_rev - imprime en reversa
 * @str : string
 * return: 0
 */
void print_rev(char *str)
{
int length = 0;
while (str[length] != '\0')
{
length++;
}
for (int i = length - 1; i >= 0; i--)
{
_putchar("%c", str[i]);
}
_putchar("\n");
}
