#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet
 * @nb: The number to be checked
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int round = 0;
	char let = 'a';

	while (round < 10)
	{
		let = 'a';
		while (let <= 'z')
		{
			_putchar(let);
			let++;
		}
		_putchar('\n');

		round++;
	}
}
