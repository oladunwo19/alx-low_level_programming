#include <stdio.h>
/**
 * main- entry point
 *
 * This is the main function 
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	printf("size of a char: %lu byte(s)\n", sizeof(char));
	printf("size of an int: %lu byte(s)\n", sizeof(int));
	printf("size of a float: %lu byte(s)\n", sizeof(float));
	printf("size of a double: %lu byte(s)\n", sizeof(double));
	return (0);
}
