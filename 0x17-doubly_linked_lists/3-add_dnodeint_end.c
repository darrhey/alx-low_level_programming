#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a doubly linked list
 * @head: head of the list
 * @n: value to add to the list
 * Return: The address of the new element or NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *temp = NULL, *present = NULL;
temp = malloc(sizeof(dlistint_t));
if (temp == NULL)
return NULL;
temp->n = n;
if (*head)
{
present = *head;
while (present->next != NULL)
present = present->next;
temp->next = NULL;
temp->prev = present;
present->next = temp;
return (temp);
}
temp->next = *head;
temp->prev = NULL;
*head = temp;
return (*head);
}
