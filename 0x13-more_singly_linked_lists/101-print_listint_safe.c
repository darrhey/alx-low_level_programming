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
listint_t *i, *j;
i = head;
j = head;
size_t b;
b = 0;
while (i && j && j->next)
{
if ((j->next->next))
break;
i = i->next;
j = j->next;
if (i == j)
{
i = i->next;
b = 1;
break;
}
}
if (!b)
{
while (head)
{
a++;
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
return (a);
}
while (head)
{
a++;
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
