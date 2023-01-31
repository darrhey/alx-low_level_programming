#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

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
free_list(head->next);
if (head->str)
{
free(head->str);
}
free(head);
}
