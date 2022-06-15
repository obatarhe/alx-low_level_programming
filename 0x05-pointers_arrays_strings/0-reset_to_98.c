#include "main.h"

/**
 * _strcat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * Return: the pointer to dest.
 */

char *_strcat(char *dest, char *src)
{
	int con1 = 0, con2 = 0;

	while (*(dest + con1) != '\0')
	{
		con1++;
	}

	while (con2 >= 0)
	{
		*(dest + con1) = *(src + con2);
		if (*(src + con2) == '\0')
			break;
		con1++;
		con2++;
	}
	return (dest);
}
