#include "main.h"

/**
 * main -  prints 10 times the alphabet, in lowercase
 *
 *print 10x
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