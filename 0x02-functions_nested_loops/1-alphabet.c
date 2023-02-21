#include "main.h"

/**
 * main - prints the alphabet in lowercase, followed by a new line
 * code written by ArchibaldTK
 * Return: 0 (Success)
*/

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
_putchar('\n');
return (0);
}
