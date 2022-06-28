#include "stdio.h"
#include "stdlib.h"

/**
 * main - this a function to print its name
 * and file path should not be changed
 * @argc: argc parameter
 * @argc: an array of a command listed
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int sum, num1, num2;

	if (argc != 3)
	{
		printf("%\n", "Error");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	sum = num1 * num2;

	printf("%d\n", sum);
	return (0);
}
