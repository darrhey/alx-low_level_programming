#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

static listint_t *new(const int n);

/**
 * insert_nodeint_at_index - inserts a new node at a position
 * @head: pointer to a listint_t list
 * @idx: index to insert node
 * Return: address of the new node or NULL if failed
 */

int *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i;
listint_t *nodes, *tmp;
if (!(*head) && idx == 0)
{
*head = new(n);
return (*head);
}
i = 0;
tmp = *head;
while (tmp)
{
if (idx == 0)
{
*head = new(n);
(*head)->next = tmp;
return (*head);
}
else if (i == (idx - 1))
{
nodes = new(n);
nodes->next = tmp->next;
tmp->next = nodes;
return (nodes);
}
tmp = tmp->next;
i++;
}
return (NULL);
}

/**
 * new - creates a new node
 * @n: int type
 * return: pointer to the new node
 */

static listint_t *new(const int n)
{
listint_t *tmp;
tmp = malloc(sizeof(listint_t));
if (!tmp)
return (NULL);
tmp->n = n;
tmp->next = NULL;
return (tmp);
}
