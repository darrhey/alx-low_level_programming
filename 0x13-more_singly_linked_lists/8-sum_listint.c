#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - returns the sum of all the data of a listint_t
 * @head: pointer to a listint_t list
 * Return: sum of all data but 0 if empty
 */

int sum_listint(listint_t *head)
{
int sum;
sum = 0;
if (!head)
return (0);
while (head)
{
sum += head->n;
head = head->next;
}
return (sum);
}
