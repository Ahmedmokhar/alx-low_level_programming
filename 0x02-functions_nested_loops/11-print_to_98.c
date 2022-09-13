#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints numbers to 98
 * Description: prints all natural number from n - 98
 * Return: void
 */

void print_to_98(int n)
{
	if (n == 98)
	{
		printf("%d\n", n);
	}
	else if (n < 98)
	{
		int i;

		for (i = n; i < 98; i++)
		{
			printf("%d, ", i);
		}
	}
	else if (n > 98)
	{
		int i;

		for (i = n; i > 98; i--)
		{
			printf("%d, ", i);
		}
	}
}