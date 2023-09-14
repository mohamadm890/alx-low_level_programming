#include "main.h"

void print_most_numbers(void)
{
for (int i = 0; 9 >= i; i++)
{
if (i == 4 || i == 2)
{
continue;
}
_putchar("%d\n", i);
}
return 0;
}
