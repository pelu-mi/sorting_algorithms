#include "sort.h"

/**
 * bubble_sort - Implementation of bubble sort algorithm
 * @array: Array to be sorted
 * @size: Size of array
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, passes = 1;
	int repeat = 1, swap = 0;

	if (array == NULL || size < 2)
		return;

	while (repeat == 1)
	{
		repeat = 0;
		for (i = 0; i < (size - passes); i++)
		{
			if (array[i] > array[i + 1])
			{
				swap = array[i];
				array[i] = array[i + 1];
				array[i + 1] = swap;
				repeat = 1;
			}
			print_array(array, size);
		}
		passes++;
	}
}
