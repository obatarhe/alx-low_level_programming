#include "stdio.h"

/**
 * fizz_buzz - printing ot 100
 */

void fizz_buzz(void)
{
	int x;

	for (x = 0; x <= 100; x++)
	{
		if (x % 3 == 0 && x % 5 == 0)
			printf("FizzBuzz ");
		else if (x % 3 == 0)
			printf("Fizz "):
		else if (x % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", x);
	}
}
