#include "main.h"

/**
 * main - Write a function that checks for lowercase character.
 *        Prototype: int _islower(int c)
 *
 * Return: 1 if lowercase
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
