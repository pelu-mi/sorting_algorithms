#include "sort.h"

/**
 * cocktail_sort_list - Implementing the Cocktail shaker sort algorithm
 * @list: Linked list to sort
 */
void cocktail_sort_list(listint_t **list)
{
	int x;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	x = (*list)->n;
	if (x > 5)
		print_list(list);
}
