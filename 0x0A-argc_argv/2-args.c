#include "stdio.h"

/*
 * main - this a function to print its name
 * and file path should not be changed
 * @argc: argc parameter
 * @argc: an array of a command listed
 * Return: 0 for success
 */

int main (int argc, char *argv[])
{
	int i;

	for ( i = 0; i < argc; i++);
		print("%s\n", argv[i]);

        return (0);
}

