#include "main.h"

/**
 * flip_bits - Determines the number of bits needed to be flipped to get from
 * one number to another
 * @n: The first number
 * @m: The second number
 *
 * Return: The number of bits that need to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int exclusive = n ^ m;

	while (exclusive)
	{
		if (exclusive & 1)
			count++;
		exclusive >>= 1;
	}

	return (count);
}
