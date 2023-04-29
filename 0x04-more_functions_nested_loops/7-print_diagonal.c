#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
* print_diagonal  - Entry point
* @n : 'n is the number of times'
*  descreption: 'draw line in terminal'
* Return:  always 0 (success)
**/
void print_diagonal(int n)
{
int z;
int j;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (j = 0; j < n; j++)
{
for (z = 0 ; z < j; z++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
}
