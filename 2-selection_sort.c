#include "sort.h"

void swap(int *a, int *b);
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
 * selection_sort - Implementation of selection sort algorithm
 * @array: Array to be sorted
 * @size: Size of array
 */

void selection_sort(int *array, size_t size)
{
	size_t i = 0, j, min_id;
	/*bool flag = true;*/

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size; i++)
	{
		/*flag = false;*/
		min_id = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_id])
			{
				min_id = j;
			}
		}
		if (min_id != i)
		{
			swap(&array[min_id], &array[i]);
			/*flag = true;*/
		}
		print_array(array, size);
	}
}
