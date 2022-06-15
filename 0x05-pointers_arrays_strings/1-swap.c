#include "main.h"

/**
 * swap_int - function that swaps the values of two integers.
 * @a: integers 1
 * @b: integers 2
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}
