#include "stdio.h"

/*
 * main - this a function to print its name
 * and file path should not be changed
 * @argc: argc parameter
 * @argc: an array of a command listed
 * Return: 0 for success
 */

int main (int argc _attribute_((unused)), char *argv[])
{
	print("%s\n", argv[0]);
	
	return (0);
}

