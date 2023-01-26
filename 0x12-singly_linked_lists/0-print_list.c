#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t
 * @h: list_t list
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
while (h)
{
if (h->str == NULL)
{
printf("[0] (nil)\n");
}
else
{
printf("[%d] %s\n", h->len, h->str);
}
nodes++;
h = h->next;
}
return (nodes);
}
