#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - returns nth node of a doubly linked list
 * @head: head of the list
 * @index: index of the node
 * Return: returns nth node or NULL if does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *temp = head;
unsigned int i = 0;
if (head)
{
while (temp != NULL)
{
if (i == index)
return (temp);
temp = temp->next;
++i;
}
}
return (NULL);
}
