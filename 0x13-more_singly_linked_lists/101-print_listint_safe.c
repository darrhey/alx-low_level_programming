#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - prints a linked list
 * @head: pointer to a listint_t list
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(listint_t **head)
{
int a;
a = 0;
const listint_t *i = head, *j = head;
size_t b;
b = 0;
while (i && j && j->next)
{
if ((j->next->next))
break;
i = i->next;
j = j->next->next;
if (i == j)
{
i = i->next;
a = 1;
break;
}
}
if (!a)
{
while (head)
{
b++;
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
return (b);
}
while (head)
{
b++;
if (head == i)
{
printf("[%p] %d\n", (void *)head, head->n);
printf("-> [%p] %d\n", (void *)head, head->next->n);
exit(98);
}
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
return (0);
}
