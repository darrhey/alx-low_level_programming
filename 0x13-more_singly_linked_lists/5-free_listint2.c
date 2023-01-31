#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

void free_listint(listint_t *head);
/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to a listint_t list
 * Return: void
 */

void free_listint2(listint_t *head)
{
listint_t *tmp;
if (!head)
{
return;
}
if (head)
{
tmp = *head;
*head = NULL;
free_listint(tmp);
return;
}
}

/**
 * free_listint - frees a listint_t list
 * @head: pointer to a listint_t list
 * Return: void
 */

void free_listint(listint_t *head)
{
if (!head)
{
return;
}
free_listint(head->next);
free(head);
}
