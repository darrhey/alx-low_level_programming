#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at a position
 * @head: pointer to a listint_t list
 * @index: index to delete node
 * Return: 1 if succcceeded or -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int i;
listint_t *nodes, *tmp;
if (!(*head))
return (-1);
i = 0;
tmp = NULL;
nodes = *head;
if (!index)
{
(*head) = (*head)->next;
free(nodes);
return (1);
}
while (nodes)
{
if (i == index)
{
tmp->next = nodes->next;
free(nodes);
return (1);
}
tmp = nodes;
nodes = nodes->next;
i++;
}
return (-1);
}
