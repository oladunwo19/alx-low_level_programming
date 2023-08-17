#include "main.h"
/**
 * print_alphabet_x10 - Make the alphabet x10
 * Return: void
 */

void print_alphabet_x10(void)

{
	int c;
	int b = 0;

	while (b <= 9)
	{
	for (c = 'a'; c <= 'z'; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
	b++;
	}
}
