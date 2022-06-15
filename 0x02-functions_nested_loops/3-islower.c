#include "main.h"
/**
* Write a function that checks for lowercase character.
* Prototype: int _islower(int c);
*
* Description:  Return: 1 if lowercase
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
