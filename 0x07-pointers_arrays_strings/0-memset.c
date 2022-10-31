/**
 * _memset - a fnction
 *
 * @s:
 *
 * @b: input
 *
 * @n:
 *
 * Return: a pointer to the filled memory area  @s
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
s[i] = b;

return (s);
}
