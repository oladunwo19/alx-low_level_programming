#include "main.h"

/**
 * swap_int - the main function
 * @a: variable1
 * @b: variable2
 */

void swap_int(int *a, int *b)
{
	int num_a;

	num_a = *a;
	*a = *b;
	*b = num_a;
}
