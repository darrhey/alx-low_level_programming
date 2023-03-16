#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - Sum of all data of a doubly linked list
 * @head: head of the list
 * Return: The sum of all data
 */
int sum_dlistint(dlistint_t *head)
{
dlistint_t *temp = head;
int sum = 0;
if (head)
{
while (temp != NULL)
{
sum += temp->n;
temp = temp->next;
}
}
return (sum);
}
