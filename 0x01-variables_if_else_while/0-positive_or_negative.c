#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* This program will assign a random number to the variable n each time it is executed.*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

    if (n > 0){
        printf("is positive");
    }
    else if (n < 0){
        printf("is negative");
    }
    else {
        printf("is zero");
    }


	return (0);
}
