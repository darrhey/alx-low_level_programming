#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the of a list_t
 * @head: pointer to the head
 * @str: string to be added
 * Return: the address of the new element or NULL if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *add, *new, *last;
size_t len;
new = malloc(sizeof(list_t));
if (new == NULL)
{
return (NULL);
}
add = strdup(str);
if (str == NULL)
{
free(new);
return (NULL);
}
for (len = 0; str[len];)
{
len++;
}
new->str = add;
new->len = len;
new->next = NULL;
if (*head == NULL)
{
*head = new;
}
else
{
last = *head;
while (last->next != NULL)
{
last = last->next;
}
last->next = new;
}
return (*head);
}
