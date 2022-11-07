#include "main.h"
/**
 * _isalpha - checks code
 * @c: single
 * Return: 1 for letter, 0 otherwisw
 */
int _isalpha(int c)
{
if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
return (1);
else
return (0);
}
