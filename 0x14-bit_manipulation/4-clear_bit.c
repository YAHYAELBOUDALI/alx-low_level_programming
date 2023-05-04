#include "main.h"

/**
 * clear_bit - Sets the value of a bit at a given index to 0
 * @n: A pointer to the number whose bit will be cleared
 * @index: The index of the bit to clear
 *
 * Return: 1 if successful, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index > sizeof(unsigned long int) * 8 - 1)
		return (-1);

	*n &= ~mask;

	return (1);
}
