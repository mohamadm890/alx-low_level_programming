#include <stdio.h>
/**
 * main - prints all possible combinations of single-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
int digit;
for (digit = 0; digit <= 9; digit++)
{
putchar('0' + digit);
if (digit < 9)
{
putchar(digit + 1 == 10 ? '$' : ',');
}
}
putchar('\n');
return (0);
}

