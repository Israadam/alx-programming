#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * @w: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *w)
{
size_t s = 0;
while (w)
{
if (!w->str)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", w->len, w->str);
w = w->next;
s++;
}
return (s);
}
