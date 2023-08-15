#include <stdio.h>
/**
 * main - main function
 *
 * Return: always 0
 */
int main(void)
{
	int X;

	for (X = 0; X < 10; X++)
	{
		putchar(X + '0');
		if (X != 9)
		{
		putchar(',');
		putchar(' ');
		}
	}
putchar('\n');
return (0);
}
