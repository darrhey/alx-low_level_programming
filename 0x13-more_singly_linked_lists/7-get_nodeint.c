#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t
 * @head: pointer to a listint_t list
 * @index: index of the node
 * Return: nth node but NULL if empty
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i;
listint_t *tmp;
i = 0;
if (!head)
return (NULL);
tmp = head;
while (i < index)
{
if (!tmp)
return (NULL);
tmp = tmp->next;
i++;
}
return (tmp);
}
