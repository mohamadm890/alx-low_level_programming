#include "main.h"
#include <stdio.h>
/**
 * rev_string - Reverses a string
 * @s: Input string
 * Return: String in reverse
 */
void rev_string(char *s)
{
char temp;
int i = 0;
int j = strlen(s) - 1;
while (i < j)
{
temp = s[i];
s[i] = s[j];
s[j] = temp;
i++;
j--;
}
}
