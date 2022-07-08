#include "main.h"

/**
 * Print a string using recursion
 * @s: string parameter
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
