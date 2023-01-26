#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to a list_t list
 * Return: void
 */

void free_list(list_t *head)
{
if (head == NULL)
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
