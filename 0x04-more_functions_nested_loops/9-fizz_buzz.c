#include "main.h"

/**
* main - a program that prints the numbers from 1 to 100, 
* followed by a new line. But for multiples of three print Fizz 
* instead of the number and for the multiples of five print Buzz. 
* For numbers which are multiples of both three and five print 
* FizzBuzz.
*
 *Return: 0 always
 */

void fizz_buzz(void)
{
	int x;

	for (x = 0; x <= 100; x++)
	{
		if (x % 3 == 0 && x % 5 == 0)
			printf("FizzBuzz ");
		else if (x % 3 == 0)
			printf("Fizz ");
		else if (x % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", x);
	}
}
