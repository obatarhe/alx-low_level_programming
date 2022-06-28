#include "stdio.h"

/*
 * main - this a function to print its name
 * @argc: argc parameter
 * @argc: an array of a command listed
 * Return: 0 for success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	print("%s\n", *argv[]);

	return (0);
}

