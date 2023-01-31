#include <stdio.h>
#include <string.h>
#include "lists.h"

listint_t *new(const int n);

/**
 * add_nodeint - adds a new node at the beginning of a listint_t
 * @head: pointer to the head
 * @str: string to be added
 * Return: the address of the new element or NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
list_t *tmp;
 if (!(*head))
   {
     *head = new(n);
     return (*head);
   }
 tmp = new(n);
 tmp->next = *head;
 *head = tmp;
 return (*head);
}

/**
 * new - creates a new node
 * @n: int type
 * return: pointer to the new node
 */

listint_t *new(const int n)
{
listint_t *tmp;
tmp = malloc(sizeof(listint_t));
if (!tmp)
return (NULL);
tmp->n = n;
tmp->next = NULL;
return (tmp);
}
