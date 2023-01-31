#include <stdio.h>
#include <string.h>
#include "lists.h"

listint_t *new_node(const int n);
/**
 * add_nodeint_end - adds a new node at the of a listint_t
 * @head: pointer to the head
 * @n: number to be added
 * Return: the address of the new element or NULL if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *tmp, *new;
if (!(*head))
{
*head = new_node(n);
return (*head);
}
new = *head;
while (new)
{
if (!new->next)
{
tmp = new_node(n);
new->next = tmp;
break;
}
new = new->next;
}
return (*head);
}

/**
 * new_node - create a new node
 * @n: number to add
 * Return: pointer to a list_t
 */
listint_t *new_node(const int n)
{
listint_t *tmp;
tmp = malloc(sizeof(listint_t));
if (!tmp)
{
return (NULL);
}
tmp->n = n;
tmp->next = NULL;
return (tmp);
}
