#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the numbers from 1 to 100
 * multiplies of three print fizz
 * multiplies of five print buzz
 * both three and five print fizzbuzz
 * code by ArchibaldTK
 * Return: 0
 */

int main(void)
{
	int h = 1;

	while (h <= 100)
	{
		if (h % 3 == 0 && h % 5 == 0)
			printf("FIzzBuzz ");
		else if (h % 5 == 0)
		{
			if (h == 100)
			{
				printf("Buzz");
				printf("\n");
			}
			else
				printf("Buzz ");
		}
		else if (h % 3 == 0)
			printf("Fizz ");
		else
			printf("%d ", h);
	h++;
	}
return (0);
}
