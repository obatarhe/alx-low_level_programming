#include "main.h"

/**
 * int_isupper - Checks for uppercase character
 * @c: the character to be checked
 * 
 * return 1 if uppercase else 0
 */

int _isupper(int c);
{
	int c;

	if (c >= 'A' && c <+'Z') {
		return (1);
	}
	else {
		return (0);
	}
}