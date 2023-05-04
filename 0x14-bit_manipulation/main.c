#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned int n_uint;
	unsigned long int n_ulong;
	int bit_val, ret_val;

	/* Test binary_to_uint() */
	n_uint = binary_to_uint("1");
	printf("%u\n", n_uint);
	n_uint = binary_to_uint("101");
	printf("%u\n", n_uint);
	n_uint = binary_to_uint("1e01");
	printf("%u\n", n_uint);
	n_uint = binary_to_uint("1100010");
	printf("%u\n", n_uint);
	n_uint = binary_to_uint("0000000000000000000110010010");
	printf("%u\n", n_uint);

	/* Test print_binary() */
	n_ulong = 0;
	print_binary(n_ulong);
	printf("\n");
	n_ulong = 1;
	print_binary(n_ulong);
	printf("\n");
	n_ulong = 98;
	print_binary(n_ulong);
	printf("\n");
	n_ulong = 1024;
	print_binary(n_ulong);
	printf("\n");
	n_ulong = 12345;
	print_binary(n_ulong);
	printf("\n");

	/* Test get_bit() */
	bit_val = get_bit(1024, 10);
	printf("%d\n", bit_val);
	bit_val = get_bit(98, 1);
	printf("%d\n", bit_val);
	bit_val = get_bit(1024, 5);
	printf("%d\n", bit_val);
	bit_val = get_bit(0, 0);
	printf("%d\n", bit_val);

	/* Test set_bit() */
	n_ulong = 1024;
	ret_val = set_bit(&n_ulong, 5);
	printf("%d\n%lu\n", ret_val, n_ulong);
	ret_val = set_bit(&n_ulong, 3);
	printf("%d\n%lu\n", ret_val, n_ulong);
	ret_val = set_bit(&n_ulong, 10);
	printf("%d\n%lu\n", ret_val, n_ulong);

	/* Test clear_bit() */
	n_ulong = 1024;
	ret_val = clear_bit(&n_ulong, 5);
	printf("%d\n%lu\n", ret_val, n_ulong);
	ret_val = clear_bit(&n_ulong, 3);
	printf("%d\n%lu\n", ret_val, n_ulong);
	ret_val = clear_bit(&n_ulong, 10);
	printf("%d\n%lu\n", ret_val, n_ulong);

	return (0);
}
