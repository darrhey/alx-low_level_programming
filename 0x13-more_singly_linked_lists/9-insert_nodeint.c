#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a position
 * @head: pointer to a listint_t list
 * @idx: index to insert node
 * @n: int type
 * Return: the address of new node or NULL if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *nodes, *tmp;
nodes = *head;
tmp = malloc(sizeof(listint_t));
if (!tmp)
return (NULL);
tmp->n = n;
if (idx == 0)
{
tmp->next = node;
*head = tmp;
return (*head);
}
while (idx > 1)
{
nodes = nodes->next;
index--;
if (!nodes)
{
free(tmp);
return (NULL);
}
}
tmp->next = nodes->next;
node->next = tmp;
return (tmp);
}
