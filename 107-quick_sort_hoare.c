#include "sort.h"

void swap(int *a, int *b);
int partition(int *array, int low, int high, size_t size);
void quicksort(int *array, int low, int high, size_t size);
/**
 * swap - Swap 2 integers
 * @a: First integer
 * @b: Second integer
 */
void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}


/**
 * partition - Divide array into 2 partitions
 * @array: Array to be divided
 * @low: Lower bound index
 * @high: Upper bound index
 * @size: Size of original array
 * Return: Pivot index after ensuring all values on left are smaller
 *	   and all values on right are greater
 */

int partition(int *array, int low, int high, size_t size)
{
	int *pivot, above, below;

	pivot = &array[high];
	for (above = below = low; below < high; below++)
	{
		if (array[below] < *pivot)
		{
			if (above < below)
			{
				swap(array + below, array + above);
				print_array(array, size);
			}
			above++;
		}
	}

	if (array[above] > *pivot)
	{
		swap(array + above, pivot);
		print_array(array, size);
	}

	return (above);
}


/**
 * quicksort - Recursive quick sort function
 * @array: Array to be sorted
 * @low: Lower bound index
 * @high: upper bound index
 * @size: Size of array
 */
void quicksort(int *array, int low, int high, size_t size)
{
	int p;

	if (low >= high || low < 0)
		return;

	/* Partition the array and get the pivot index */
	p = partition(array, low, high, size);

	/* sort each partition */
	quicksort(array, low, p - 1, size); /* Left side of pivot index */
	quicksort(array, p + 1, high, size); /* Right side of pivot index */
}


/**
 * quick_sort_hoare - Implementation of quick sort algorithm using Hoare
 *			partition
 * @array: Array to be sorted
 * @size: Size of array
 */

void quick_sort_hoare(int *array, size_t size)
{
	int high = (int) size;

	if (array == NULL || size < 2)
		return;

	quicksort(array, 0, high - 1, size);
}
