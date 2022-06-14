#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse,
 *  followed by a new line.
 *
 * Return: Always 0.
 */

int main(void)
{
		char lowercase;

	for (lowercase = 'z'; lowercase >= 'a'; lowercase--)
	{
		putchar(lowercase);
	}

	putchar('\n');

	return (0);
}
