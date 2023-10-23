#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */
size_t print_listint(const listint_t *h)
{
int count = 0;
if (h == NULL)
{
printf("there is nothing to see here");
}
struct listint_s *ptr = NULL;
ptr = h;
while (ptr != NULL)
{
printf("%d\n", ptr->n);
ptr = ptr->next;
count++;
}
return (count);
}
