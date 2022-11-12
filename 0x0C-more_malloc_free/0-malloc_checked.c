#include <stdlib.h>

/**
 * malloc_checked - allocates
 *
 * @b: amount
 *
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
void *new_mem;

new_mem = malloc(b);
if (new_mem == NULL)
exit(98);
return (new_mem);
}
