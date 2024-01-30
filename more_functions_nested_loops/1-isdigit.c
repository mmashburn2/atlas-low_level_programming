#include "main.h"
/**
 * _isdigit looks for a digit
 * @c: the digit in question
 *
 * return: 1 if its a digit
 */
int _isdigit(int c)
{
	if (c <= 57 && c >= 48)
	{
		return (1);
	}
	return (0);
}

