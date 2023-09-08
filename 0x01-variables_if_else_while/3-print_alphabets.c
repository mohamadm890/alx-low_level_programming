#include <stdio.h>
/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char Letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
putchar(letter);
}
for (letter = 'A'; letter <= 'Z'; letter++)
{
putchar(letter);
}
putchar('\n');
return (0);
}
