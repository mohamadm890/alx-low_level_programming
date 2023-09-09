#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits
 * Return: ALways 0 (Success)
 */
int main(void)
{
int n = 0;
int m;
while (n <= 8)
{
m = n + 1;
while (m <= 9)
{
putchar('0' + n);
putchar('0' + m);
if (n != 8 || m != 9)
{
putchar(',');
putchar(' ');
}
m++;
}
n++;
}
putchar('\n');
return (0);
}
