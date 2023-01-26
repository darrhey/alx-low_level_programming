#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the of a list_t
 * @head: pointer to the head
 * @str: string to be added
 * Return: the address of the new element or NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *tmp;
if (*head == NULL)
{
*head = tmp_node(str);
return (*head);
}
if (((*head)->next) == NULL)
{
tmp = tmp_node(str);
tmp->next = (*head)->next;
(*head)->next = tmp;
}
else
{
add_node_end(&(*head)->next, str);
}
return (*head);
}

/**
 * tmp_nocde - creates a new node
 * @str: string to add
 *
 * Return: pointer to a list_t
 */
list_t *tmp_node(const char *str)
{
list_t *tmp;
size_t len;
tmp = malloc(sizeof(list_t));
if (tmp == NULL)
{
return (NULL);
}
len = 0;
while (str[len])
{
len++;
}
tmp->len = len;
tmp->str = strdup(str);
tmp->next = NULL;
return (tmp);
}
