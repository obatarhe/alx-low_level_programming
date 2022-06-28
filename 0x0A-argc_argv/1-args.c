#include "stdio.h"

/**
 * main - this a function to print its name
 * @argc: argc parameter
 * @argv: an array of a command list
 * Return: 0 for success
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%s\n", argc - 1);

	return (0);
}
