#include "sort.h"

/**
 * radix_sort - Implementing the radix sort algorithm
 * @array: Array to sort
 * @size: Size of array
 */
void radix_sort(int *array, size_t size)
{
	/* Template for Solution */
	int x, y;

	if (array == NULL || size < 2)
		return;
	x = array[0] + 1;
	y = size - 1;
	if (x + y > 5)
		print_array(array, size);
}
