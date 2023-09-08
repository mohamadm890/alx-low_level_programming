#include <stdio.h>
/**
 * main - Prints numbers between 0 to 9 and letters between a to f.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int number;
for (number = 0; number <= 15; number++)
{
printf("%x", number);
}
printf("\n");
return (0);
}
