#include "main.h"
/**
 * print_alphabet - Print the lowercase alphabet
 * main - print alphabets
 * description - Write a C program to print full letters
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
_putchar('\n');
}
