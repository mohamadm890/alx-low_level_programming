#include <stdio.h>
/**
 * main - prints all possible combinations of single-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
for (int i = 0; i <= 8; i++)
{
for (int j = i + 1; j <= 9; j++)
{
putchar('0' + i);
putchar('0' + j);
if (i != 8 || j != 9)
{
putchar(',');
putchar(' ');
}
}
}
