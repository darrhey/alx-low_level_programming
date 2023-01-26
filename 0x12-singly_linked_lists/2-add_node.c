#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t
 * @head: pointer to the head
 * @str: string to be added
 * Return: the address of the new element or NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *tmp;
size_t len;
len = 0;
tmp = malloc(sizeof(list_t));
if (tmp == NULL)
{
return (NULL);
}
while (str[len])
{
len++;
}
tmp->len = len;
tmp->str = strdup(str);
if (*head == NULL)
{
tmp->next = NULL;
}
else
{
tmp->next = *head;
}
*head = tmp;
return (*head);
}
