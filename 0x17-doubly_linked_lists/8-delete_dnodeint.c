#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - delete a new node at index of a doubly linked list
 * @head: head of the list
 * @index: index of the node to be deleted
 * Return: 1 for success and -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *present = NULL, *temp = NULL;
if (!head || !*head)
return (-1);
temp = *head;
if (index == 0)
{
*head = (*head)->next;
(*head)->prev = NULL;
free(temp);
return (1);
}
for (; index > 1 && temp && temp->next; index--)
temp = temp->next;
if (temp->next)
return (-1);
present = temp->next;
temp->next = present->next ? present->next : NULL;
if (present->next)
present->next->prev = temp;
free(present);
return (1);
}
