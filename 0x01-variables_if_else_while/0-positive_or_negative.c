#include <stdlib.h>

#include <time.h>


/**
 * function to determine a positive, zero or negative input number
 *
 * it print the last digit of the number stored in th variable
 *
 * Return: Always 0.
 */

int main(void)
{
	int n;


	srand(time(0));

	n = rand() - RAND_MAX / 2;


	if (n>0)
		printf("%d is positive\n", n);
	else if (n<0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);


	return (0);
}
