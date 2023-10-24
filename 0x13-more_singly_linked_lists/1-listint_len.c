#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked lists
 * @E: linked list of type listint_t to traverse
 * Return: number of nodes
 */
size_t listint_len(const listint_t *E)
{
size_t num = 0;
while (E)
{
num++;
E = E->next;
}
return (num);
}
