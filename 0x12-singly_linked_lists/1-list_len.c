#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @w: pointer to the list_t list
 *
 * Return: number of elements in w
 */
size_t list_len(const list_t *w)
{
size_t n = 0;
while (w)
{
n++;
w = w->next;
}
return (n);
}
