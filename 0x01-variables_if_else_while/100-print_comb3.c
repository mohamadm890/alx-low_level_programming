#include <stdio.h>
/**
 * main - prints all possible combinations of single-digit numbers
 * Return: Always 0 (Success)
 */
#include <stdio.h>
int main(void)
{
for (char d = '0'; d <= '8'; d++)
{
for (char p = d + 1; p <= '9'; p++)
{
putchar(d);
putchar(p);
putchar((d == '8' && p == '9') ? '\n' : ',');
}
}
return (0);
}
