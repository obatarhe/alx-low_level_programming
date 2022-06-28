#include "stdio.h"

/*
 * main - this a function to print its name
 * and file path should not be changed
 * @argc: argc parameter
 * @argv: an array of a command listed
 * Return: 0 for success
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
        printf("%s\n", argc - 1);

        return (0);
}

