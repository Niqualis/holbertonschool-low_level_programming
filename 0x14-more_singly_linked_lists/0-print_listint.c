#include "lists.h"

/**
* print_listint - prints elements in a list
* @h: pointer in a list
* Return:size of list
*/
size_t print_listint(const listint_t *h)
{
size_t l = 0;

while (h)
{
printf("%d\n", h->n);
l++;
h = h->next;
}
return (l);
}
