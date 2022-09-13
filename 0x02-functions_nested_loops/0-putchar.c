#include "main.h"

/**
 * main - Entry point
 * Description: prints '_putchar \n'
 * Return: Always 0 (success)
 */
 
int main(void)
{
	char Stat[] = "_putchar \n";
	
	int i = 0;

	while (Stat[i] != '\0')
		{
			_putchar(Stat[i]);
			i++;
		}
		
	return (0);
}
