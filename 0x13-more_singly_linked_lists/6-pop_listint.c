#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of listint_t list
 * @head: pointer to a listint_t list
 * Return: head node's data but 0 if empty
 */

int pop_listint(listint_t **head)
{
int i;
listint_t *tmp;
if (!(head) || !head)
return (0);
tmp = (*head)->next;
i = (*head)->n;
free(*head);
*head = tmp;
return (i);
}
