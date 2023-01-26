#include <stdio.h>
#include <string.h>
#include "lists.h"

list_t *new_node(const char *str);
/**
 * add_node_end - adds a new node at the of a list_t
 * @head: pointer to the head
 * @str: string to be added
 * Return: the address of the new element or NULL if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *tmp;
if (!(*head))
{
*head = new_node(str);
return (*head);
}
if (!(*head)->next)
{
tmp = new_node(str);
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
 * new_node - create a new node
 * @str: string to add
 * Return: pointer to a list_t
 */
list_t *new_node(const char *str)
{
list_t *tmp;
size_t len;
tmp = malloc(sizeof(list_t));
if (!tmp)
{
return (NULL);
}
len = 0;
while (str[len])
{
len++;
}
tmp->str = strdup(str);
tmp->len = len;
tmp->next = NULL;
return (tmp);
}
