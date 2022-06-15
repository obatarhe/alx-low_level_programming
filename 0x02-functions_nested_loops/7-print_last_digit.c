#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number.
 * @n: n is an integer
 *
 *
 * Return: integer
 */

int print_last_digit(int n)
{
	int lastDigit = n % 10;

	if (n < 0)
		lastDigit = lastDigit * -1;

	_putchar(lastDigit + '0');

	return (lastDigit);
}
