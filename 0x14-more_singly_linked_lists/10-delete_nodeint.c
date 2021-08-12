#include "lists.h"
#include <stdlib.h>

/**
* delete_nodeint_at_index - delete a node from a list at some given index
* @head: header pointer
* @index: index of the node to be deleted
* Return: 1 onSuccess
* Error: -1
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *tmp, *copy = *head;
unsigned int node;

if (copy == NULL)
return (-1);

if (index == 0)
{
*head = (*head)->next;
free(copy);
return (1);
}

for (node = 0; node < (index - 1); node++)
{
if (copy->next == NULL)
return (-1);

copy = copy->next;
}

tmp = copy->next;
copy->next = tmp->next;
free(tmp);
return (1);
}
