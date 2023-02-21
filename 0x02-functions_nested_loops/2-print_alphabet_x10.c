#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets 10 times, followed by a new line
 * code written by ArchibaldTK
 * Return: 0 (Success)
*/

void print_alphabet_x10(void)
{
	int i = 0;
	char c;

	while (i < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}
