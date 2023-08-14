#include <stdio.h>
/**
 * main - main function
 *
 * Return: always 0
 */
int main(void)
{
	char X;
	char Y;

	for (X = 'a'; X <= 'z'; X += 1)
	{
		putchar(X);
	}
	for (Y = 'a'; Y <= 'z'; Y += 1)
	{
		putchar(Y);
	}
putchar('\n');
return (0);
}
