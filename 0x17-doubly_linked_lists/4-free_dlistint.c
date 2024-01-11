#include "lists.h"

/**
 * free_dlistint - It frees a dlistint_t list.
 * @head: pointer to head of the list
 * Return: nothing 0
 **/
void free_dlistint(dlistint_t *head)
{
if (head == NULL)
return;
while (head->next)
{
head = head->next;
free(head->prev);
}
free(head);
}
