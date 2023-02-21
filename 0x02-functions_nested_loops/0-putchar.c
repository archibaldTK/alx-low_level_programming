#include "main.h"

/**
 * main - prints _putchar followed by new line
 * code written by ArchibaldTK
 * Return: 0 (Success)
*/

int main(void)
{
	char _putchar[8] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	unsigned int c;

	for (c = 0; c < sizeof(_putchar); c++)
	{
		_putchar(_putchar[c]);
	}
_putchar('\n');
return (0);
}
