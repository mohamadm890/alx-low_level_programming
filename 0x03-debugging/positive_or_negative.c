#include "main.h"
/**
 * main - 0-positive_or_negative
 * description - Write a C program that prints exactly
 *
 * Return: Always 0 (Success)
 */
void  positive_or_negative(int i)
{
if ( i > 0)
{
printf("%d is positive\n",i);
}
else if ( i < 0)
{
printf("%d is negative\n",i);
}
else 
{
printf("%d is zero\n",i);
}
}
