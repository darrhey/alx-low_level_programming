#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - returns the number of elements in a doubly linked list
 * @h: head
 * Return: Number of items in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t i;
for (i = 0; h; i++)
h = h->next;
return (i);
}
