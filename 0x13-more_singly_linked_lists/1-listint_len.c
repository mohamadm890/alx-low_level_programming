#include "lists.h"

/**
 * listint_len - it count number of elements in List
 * @h: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */
size_t listint_len(const listint_t *h)
{
size_t count = 0;
while (h)
{
count++;
h = h->next;
}
return (count);
}
