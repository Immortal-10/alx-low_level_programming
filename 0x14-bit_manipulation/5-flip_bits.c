#include "main.h"

/**
 * flip_bits - counts
 * @n: The number.
 * @m: thenumber
 * Return: The necessary
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int diff, bits = 0;

diff = n ^ m;

while (diff > 0)
{
bits += (diff & 1);
diff >>= 1;
}

return (bits);
}
