#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: type int character
 * code written by ArchibaldTK
 * Return: 1 if c is a letter, else 0
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
