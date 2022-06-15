#include "main.h"

/**
 * main - function that checks for alphabetic character
 * Prototype: int _isalpha(int c);
 *
 * Return: 0
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
