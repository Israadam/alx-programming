#include "main.h"

/**
 * binary_to_uint - function converts a binary number to an unsigned int.
 * @w: pointer to a string containing a binary number
 * Return: unsigned int with decimal value of binsry number, or 0 if error
 */
unsigned int binary_to_uint(const char *w)
{
int a;
unsigned int num;
num = 0;
if (!w)
return (0);
for (a = 0; w[a] != '\0'; a++)
{
if (w[a] != '0' && w[a] != '1')
return (0);
}
for (a = 0; w[a] != '\0'; a++)
{
num <<= 1;
if (w[a] == '1')
num += 1;
}
return (num);
}
