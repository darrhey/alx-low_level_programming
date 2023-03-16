#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a doubly linked list
 * @head: head of the list
 * @n: value to add to the list
 * Return: The address of the new element or NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *temp;
temp = *head;
temp = malloc(sizeof(dlistint_t));
if (temp == NULL)
return NULL;
temp->n = n;
temp->prev = NULL;
temp->next = *head;
*head = temp;
return (temp);
}
