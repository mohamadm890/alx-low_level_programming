#include "main.h"
/**
 * print_most_numbers - checks for checks for a digit (0 through 9).
 *
 * Return: Always 0.
 */
void print_most_numbers(void)
{
for (int i = 0; i <= 9; i++)
{
if (i == 4 || i == 2)
{
continue;
}
_putchar(i);
}
}
