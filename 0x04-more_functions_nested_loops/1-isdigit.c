#include "main.h"

/**
 * _isdigit - function to check if its a digit
 * @c: and integer argument
 * Return: success
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	else
		return (0);
}
