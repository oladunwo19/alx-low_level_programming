#include <stdio.h>
/**
 * main - main function
 *
 * Return: always 0
 */
int main(void)
{
	int i;
	char j;

	for (i = 0; i < 'g'; i++)
		putchar(i + '0');
	for (j = 'a'; j < 'g'; j++)
		putchar(j + '0');
putchar('\n');
return (0);
}
