#include "main.h"

/**
 * _isupper - checks if uppercase
 * @c: the number to be checked
 * 
 * Return: 1 if we have an upper
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
