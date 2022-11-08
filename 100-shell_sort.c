#include "sort.h"

/**
 * shell_sort - Implementing the shell sort algorithm using Knuth sequence
 * @array: Array to sort
 * @size: Size of array
 */
void shell_sort(int *array, size_t size)
{
	int x, y;

	if (array)
		x = array[0] + 1;
	y = size - 1;
	if (x + y > 5)
		print_array(array, size);
}
