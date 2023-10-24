#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @E: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **E)
{
size_t len = 0;
int diff;
listint_t *temp;
if (!E || !*E)
return (0);
while (*E)
{
diff = *E - (*E)->next;
if (diff > 0)
{
temp = (*E)->next;
free(*E);
*E = temp;
len++;
}
else
{
free(*E);
*E = NULL;
len++;
break;
}
}
*E = NULL;
return (len);
}
