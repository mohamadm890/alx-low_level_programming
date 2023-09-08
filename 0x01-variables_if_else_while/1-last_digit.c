#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - 1-last_digit.c
 * description - Write a C program that prints exactly
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
int Number = n % 10;
if (Number > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, Number);
}
else if (n == 0)
{printf("Last digit of %d is %d and is 0\n", n, Number);
}
else
{printf("Last digit of %d is %d and is less than 6 and not 0\n", n, Number);
