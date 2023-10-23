#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint - Add a new node to the beginning of a linked list.
 * @head: A pointer to a pointer to the head of the list.
 * @n: The value to be stored in the new node.
 *
 * Return: A pointer to the newly added node, or NULL on failure.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *p = malloc(sizeof(listint_t));
if (p == NULL)
{
return (NULL);
}
p->n = n;
p->next = *head;
*head = p;
return (p);
}
