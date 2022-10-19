#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - check code
 * user input's number to 98
 * @n: num
 * Retun: Always
 */
void print_to_98(int n)
{
if (n < 98)
{
while (n <= 98)
{
printf("%d", n);
if (n != 98)
{
printf(", ");
}
n--;
}
}
else
{
printf("98");
}
printf("\n");
}
