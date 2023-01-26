#include <stdio.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t
 * @head: pointer to the head
 * @str: string to be added
 * Return: the address of the new element or NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
char *add;
int len;
list_t *tmp;
tmp = malloc(sizeof(list_t));
if (tmp == NULL)
{
return (NULL);
}
add = strdup(str);
if (add == NULL)
{
free (tmp);
return (NULL);
}
for (len = 0; str[len];)
len++;
tmp->str = add;
tmp->len = len;
tmp->next = *head;
*head = tmp;
return (tmp);
}
