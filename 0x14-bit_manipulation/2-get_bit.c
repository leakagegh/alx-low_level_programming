#include "main.h"

/**
 * get_bit - returns the bit value at an index in a decimal number
 * @num: number to search
 * @index: The position of the bit to return
 * Return: value of the bit given index
 */
int get_bit(unsigned long int num, unsigned int index)
{
int bit_value;

if (index > 63)
return (-1);

bit_value = (num >> index) & 1;

return (bit_value);
}
