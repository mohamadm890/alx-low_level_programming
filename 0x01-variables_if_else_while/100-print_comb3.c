#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits
 * Return: ALways 0 (Success)
 */
int main(void)
{
int n = 48;
int m;
while (n <= 56)
{
m = n + 1;
while (m <= 57)
{
putchar(n);
putchar(m);
putchar((n != 56 || m != 57) ? ',' : '\n');
m++;
}
n++;
}
return (0);
}
