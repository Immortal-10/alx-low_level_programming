#include "main.h"

/**
 * get_bit - get bit at index
 * @n: number
 * @index: index
 * Return: bit 0 or 1
 */
int get_bit(unsigned long int n, unsigned int index)
{
int bit, bin;

if (index > (sizeof(unsigned long int) * 8))
return (-1);

bin = n >> index;

bit = bin & 1;

return (bit);

}
