#include <stdio.h>
/**
 * main - prints all possible combinations of single-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
int firstDigit = 0, secondDigit = 1;
while (firstDigit <= 8)
{
while (secondDigit <= 9)
{
printf("%d%d", firstDigit, secondDigit);
if (firstDigit != 8 || secondDigit != 9)
{
printf(", ");
}
secondDigit++;
}
firstDigit++;
secondDigit = firstDigit + 1;
}
return (0);
}
