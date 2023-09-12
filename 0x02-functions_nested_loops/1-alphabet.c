#include <stdio.h>
/**
 * print_alphabet - Print the lowercase alphabet
 * main - print alphabets
 * description - Write a C program to print full letters
 *
 * Return: Always 0.
 */
int print_alphabet(void)
{
int letter;
for (letter = 'a'; letter <= 'z'; i++)
{
putchar(letter);
}
putchar('\n');
}
int main(void)
{
print_alphabet();
return (0);
}
