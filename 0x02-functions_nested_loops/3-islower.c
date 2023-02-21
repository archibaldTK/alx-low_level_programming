#include "main.h"

/**
 * main - checks for lowercase character
 * @c - char type letter
 * code written by ArchibaldTK
 * Return: 1 if c is lowercase
 * Return: 0 (Success)
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
