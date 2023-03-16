#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - delete a new node at index of a doubly linked list
 * @head: head of the list
 * @index: index of the node to be deleted
 * Return: 1 for success and -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *present = NULL, *temp = NULL;
unsigned int i = 0;
if (head && *head)
{
i = dlistint_len(*head);
if (index > i)
return (-1);
if (index == 0)
return (delete_first_dnode(head));
present = get_dnodeint_at_index(*head, index);
if (present)
{
temp = present;
if (i - 1 == index)
present->prev->next = present->next;
else
{
present->prev->next = present->next;
present->next->prev = present->prev;
}
free(temp);
return (1);
}
}
return (-1);
}
/**
 * delete_first_dnode - remove first node
 * @head: head of the node
 * Return: 1 if deleted
 */
int delete_first_dnode(dlistint_t **head)
{
dlistint_t *present = *head, *temp = NULL;
temp = present;
if (present->next)
{
present = present->next;
present->prev = temp->prev;
*head = present;
}
else
{
*head = NULL;
}
free(temp);
return (1);
}

/**
 * get_dnodeint_at_index - returns nth node of a doubly linked list
 * @head: head of the list
 * @index: index of the node
 * Return: returns nth node or NULL if does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *temp = head;
unsigned int i = 0;
if (head)
{
while (temp != NULL)
{
if (i == index)
return (temp);
temp = temp->next;
++i;
}
}
return (NULL);
}

/**
 * print_dlistint - returns the number of elements in a doubly linked list
 * @h: head
 * Return: Number of items in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
int i = 0;
while (h != NULL)
{
++i;
h = h->next;
}
return (i);
}
