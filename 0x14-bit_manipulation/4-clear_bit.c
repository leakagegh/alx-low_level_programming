#include "main.h"

/**
 * clear_bit - sets the value of a defined bit to 0
 * @num: pointer to the number that requires change
 * @idx: The index of the bit to be cleared
 * Return: 1 upon success, -1 for failure
 */
int clear_bit(unsigned long int *num, unsigned int idx)
{
if (idx > 63)
return (-1);

*num = *num & ~(1UL << idx);
return (1);
}
