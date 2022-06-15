#include <stdio.h>
/**
 * main - prints the alphabet, in lowercase,.
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char a;

	for (a = 'a' ; a <= 'z' ; a++)
	{
		_putchar(a);
	}
	_putchar('\n')
	return (0);
}
