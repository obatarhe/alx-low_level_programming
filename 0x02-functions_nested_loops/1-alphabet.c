#include <stdio.h>
/**
 * main - prints the alphabet, in lowercase,.
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
