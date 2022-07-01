#include "main.h"

/**
 * print_line - printing line
 * @n: integer params
 * 
 * Return: 0
 */

void print_line(int n)
{
	int x;

    if (n <= 0)
        _putchar('\n');
    else
        for (x = 0; x < n; x++)
            _putchar('_');

    _putchar('\n');

}
