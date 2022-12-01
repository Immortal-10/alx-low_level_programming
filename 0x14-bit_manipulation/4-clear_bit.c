#include "main.h"

/**
 * clear_bit - clar bit
 * @n: number
 * @index: index
 * Return: 1 if success
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int num = 1;

if (index > (sizeof(unsigned long int) * 8))

return (-1);

num = -(num << index);


*n = *n & num;



return (1);

}
