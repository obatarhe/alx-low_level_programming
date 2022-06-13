/**
 *8. UNIX is basically a simple operating system, 
 *but you have to be a genius to understand the simplicity
 *
 *Return: Always 1.
 */

#include <unistd.h>

/**
 *Write a C program that prints exactly and that piece of art is useful" - Dora Korpar, 2015-10-19,
 *followed by a new line, to the standard error.
 *
 *Return: Always 1.
 */
 
int main(void)
{
	write(2,
	      "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
	      59);

	return (1);
}
