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

int i;

for (i = 1; i <= 100; i++)

if (i % 3 == 0 && i % 5 != 0)

printf(" Fizz");
else if (i % 5 == 0 && i % 3 != 0)

printf(" Buzz");
else if (i % 3 == 0 && i % 5 == 0)

printf(" FizzBuzz");
else if (i == 1)

printf("%d", i);
else

printf(" %d", i);

printf("\n");

return (0);
}
