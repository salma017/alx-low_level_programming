#include "main.h"

/**
 *_memset - fill tack same a place of memory with a specific value
 * pointed to by s with the constant byte b
 * @b: the value we want
 * @n: bytes
 * @s: address
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
int x = 0;

while (n > 0)
{
s[x] = b;
n--;
x++;
}
return (s);
}
