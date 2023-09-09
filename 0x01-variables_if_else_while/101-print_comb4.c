#include <stdio.h>
/**
 * main - prints all possible different combinations of three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
int d1 = 0, d2, d3;
while (d1 <= 7)
{
d2 = d1 + 1;
while (d2 <= 8)
{
d3 = d2 + 1;
while (d3 <= 9)
{
putchar('0' + d1);
putchar('0' + d2);
putchar('0' + d3);
if (d1 != 7 || d2 != 8 || d3 != 9)
{
putchar(',');
putchar(' ');
}
d3++;
}
d2++;
}
d1++;
}
putchar('\n');
return (0);
}
