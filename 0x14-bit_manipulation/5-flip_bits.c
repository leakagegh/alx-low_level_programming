#include "main.h"

/**
 * flip_bits - counts the number of bits that needs to be flipped inorder to get from one number to the other
 * @num: the first number
 * @m: the second number
 * Return: the count of bits to be changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor, bits = 0;

	for (xor = n ^ m; xor > 0; xor >>= 1)
	{
		bits += (xor & 1);
	}

	return (bits);
}
