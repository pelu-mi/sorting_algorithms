#include "sort.h"

/**
 * heap_sort - Implementing the heap sort algorithm
 * @array: Array to sort
 * @size: Size of array
 */
void heap_sort(int *array, size_t size)
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
