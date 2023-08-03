#include "main.h"

/**
 * get_endianness - decides if a machine is little or big endian
 * Return: 0 for big, 1 for little endian
 */
int get_endianness(void)
{
unsigned int number = 1;
char *bytePtr = (char *)&number;

return (*bytePtr);
}
