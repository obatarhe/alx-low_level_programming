#include "main.h"

/**
* print_numbers - print numbers (1-9)
*/

void print_numbers(void)
{
    int x;

    for (x = 0; x < 10; x++)
        _putchr(x + '0');
    _putchr('\n');
}
