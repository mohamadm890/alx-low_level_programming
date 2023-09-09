#include <stdio.h>
/**
 * main - prints all possible combinations of single-digit numbers
 * Return: Always 0 (Success)
 */
int main()
{
int digit = 0;
while (digit <= 9)
{
putchar('0' + digit);
if (digit < 9)
{
putchar(',');
putchar(' ');
}
digit++;
}
putchar('\n');
return (0);
}
