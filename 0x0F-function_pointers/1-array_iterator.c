#include <stddef.h>

/**
 * array_iterator - a function
 *
 * @array: array
 * @size: size
 * @action: pointer
 *
 * Return: empty
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int index;

if (array != NULL && size > 0 && action != NULL)
for (index = 0; index < size; index++)
action(array[index]);
}
