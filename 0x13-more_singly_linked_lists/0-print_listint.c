#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t
 * @h: listint_t list
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
size_t nodes;
nodes = 0;
if (h == NULL)
{
return (0);
}
while (h)
{
printf("%d\n", h->len);
h = h->next;
nodes++;
}
return (nodes);
}
