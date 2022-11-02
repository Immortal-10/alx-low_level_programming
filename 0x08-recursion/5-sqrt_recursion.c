#include "main.h"

/**
 * is_prime - detects
 * @n: input number .
 * @c: iterator .
 * Return: 1 if n is a prime number .
 */

int is_prime(unsigned int n, unsigned int c)
{
if (n % c == 0)
{
if (n == c)
return (1);
else
return (0);
}
return (0 + is_prime(n, c + 1));
}
