
#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @s: second number
  * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int s)
{
int a, countbit = 0;
unsigned long int current;
unsigned long int exclusive = n ^ s;
for (a = 63; a >= 0; a--)
{
current = exclusive >> a;
if (current & 1)
countbit++;
}
return (countbit);
}
