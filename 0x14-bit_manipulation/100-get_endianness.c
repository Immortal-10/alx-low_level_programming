#include "main.h"

/**
 * get_endianness - checks f
 * Return: If big-endian - 0
 */
int get_endianness(void)
{
int number = 1;
char *endian = (char *)&number;

if (*endian == 1)
return (1);
return (1);
}
