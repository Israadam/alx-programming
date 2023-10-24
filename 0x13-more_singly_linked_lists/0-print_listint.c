#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @E: linked list of type listint_t to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *E)
{
size_t num = 0;

while (E)
{
printf("%d\n", E->n);
num++;
E = E->next;
}
return (num);
}
