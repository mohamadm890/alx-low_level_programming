#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: pointer to the list.
 * Return: number of nodes.
 **/
size_t print_dlistint(const dlistint_t *h)
{
const  dlistint_t *node = h;
size_t count = 0;
while(node)
{
print("%i/n", node->n)
count++;
node = node->next;
}
return (count);
}
