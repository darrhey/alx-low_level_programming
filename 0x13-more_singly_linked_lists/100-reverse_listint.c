#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - reverses a listint_t list
 * @head: pointer to a listint_t list
 * Return: a pointer to first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
listint_t *nodes, *tmp;
if (!head || !(*head))
return (NULL);
if (!(*head)->next)
return (*head);
tmp = *head;
nodes = NULL;
while (1)
{
if (!nodes)
{
nodes = *head;
tmp = tmp->next;
nodes->next = NULL;
*head = nodes;
}
else
{
nodes = tmp;
tmp = tmp->next;
nodes->next = *head;
if (!tmp)
{
tmp = nodes;
break;
}
*head = nodes;
}
}
*head = tmp;
return (*head);
}
