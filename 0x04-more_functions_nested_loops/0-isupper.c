#include "main.h"

/**
 * _isupper - Checks for uppercase character
 * c: the character to be checked
 *
 * Return: 1 if uppercase else 0
 */
int _isupper(int c);
{
	int c;

	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}