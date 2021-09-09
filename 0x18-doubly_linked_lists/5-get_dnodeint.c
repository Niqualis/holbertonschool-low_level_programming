#include "lists.h"

/**
* get_dnodeint_at_index - returns the nth node
* @head: head
* @index: index
*Return: the indexed node of a linked list
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int tmp = 0;
dlistint_t *i;

i = head;
if (head == NULL)
{
return (NULL);
}
while (tmp <= index)
{
if (i->next == NULL && tmp != index)
{
return (NULL);
}
else if (tmp == index)
{
return (i);
}
else
{
tmp++;
i = i->next;
}
}
return (i);
}
