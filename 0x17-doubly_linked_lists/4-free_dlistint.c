#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 * @head: head of the list
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *temp = head, *next = NULL;
while (temp != NULL)
{
next = temp->next;
free(temp);
temp = next;
}
}
