#include "main.h"
/**
 *  print_alphabet_x10 - check the code.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
char g, y;
for (g = 0; g < 10; g++)
{
for (y = 'a'; y <= 'z'; y++)
{
_putchar(y);
}
_putchar('\n');
}
return (0);
}
