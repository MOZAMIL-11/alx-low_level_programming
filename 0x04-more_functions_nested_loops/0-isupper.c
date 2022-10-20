#include "main.h"

/**
 * _isupper - checks if a checks if a character is uppercarse
 * @c: variable text
 * Return: Always 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
