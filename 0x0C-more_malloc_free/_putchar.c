#include <unistd.h>

/**
 * _putchar - writes
 * @c: the
 *
 * Return: on
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
