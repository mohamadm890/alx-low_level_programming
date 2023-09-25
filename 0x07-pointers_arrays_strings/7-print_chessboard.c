#include "main.h"
/**
  * print_chessboard - main function
  *
  * @a: function parameter declared
  *
  * Return: Always 0.
  */
void print_chessboard(char (*a)[8])
{
int o;
int i;
for (o = 0; o < 8; o++)
{
for (i = 0; i < 8; i++)
_putchar(a[o][i]);
_putchar('\n');
}
}
