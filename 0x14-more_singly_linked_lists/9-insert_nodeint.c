#include "lists.h"

/**
* insert_nodeint_at_index - inserts a new node at a given index
* @head: a pointer to list
* @index: the given index
* @n: the given number
*
* Return: a pointer to the newly add node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
listint_t *new, *copy = *head;
unsigned int node;

new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);

new->n = n;

if (index == 0)
{
new->next = copy;
*head = new;
return (new);
}

for (node = 0; node < (index - 1); node++)
{
if (copy == NULL || copy->next == NULL)
return (NULL);

copy = copy->next;
}

new->next = copy->next;
copy->next = new;

return (new);
}
