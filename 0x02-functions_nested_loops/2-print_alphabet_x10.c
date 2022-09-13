#include "main.h"

/**
 * print_alphabet_x10 - Make alphabet x10 times
 * prints the alphabet in lowercase ten times
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i ;
	
	char c;
	
	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}

		_putchar('\n');
	}
}
