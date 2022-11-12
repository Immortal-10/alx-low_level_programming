#include <stdlib.h>

/**
 * _memset - fills
 *
 * @s: input
 * @b: characters
 * @n: number
 *
 * Return: A pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
s[i] = b;
return (s);
}

/**
 * _calloc - a
 *
 * @nmemb: size
 * @size: size
 *
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
char *p;

if (nmemb == 0 || size == 0)
return (NULL);

p = malloc(nmemb * size);
if (p == NULL)
return (NULL);

_memset(p, 0, nmemb * size);

return (p);
}
