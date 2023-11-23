#include "main.h"

/**
 * get_endianness - prog checks the endianness
 * Return: 0 in big endian, 1 in small endian
 */
int get_endianness(void)
{
int a;
char *b;
a = 1;
b = (char *)&a;
return (*b);
}
