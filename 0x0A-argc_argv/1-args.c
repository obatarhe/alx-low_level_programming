#include "stdio.h"

/*
 * main - this a function to print its name
 * and file path should not be changed
 * @argc: argc parameter
 * @argc: an array of a command listed
 * Return: 0 for success
 */

int main (int argc, char *argv[] _attribute_((unused)))
{
        print("%s\n", argc - 1);

        return (0);
}

