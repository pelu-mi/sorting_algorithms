#include "sort.h"

/* Helper Function*/
void swap_nodes(listint_t **head, listint_t *node1, listint_t *node2);

/**
 * swap_nodes - Function to swap 2 nodes in a linked list
 * @head: Head of the linked list
 * @node1: First node
 * @node2: Second Node
 */

void swap_nodes(listint_t **head, listint_t *node1, listint_t *node2)
{
	listint_t *x, *y;

	/*
	 * Swap the nodes considering the head
	 * Assume the order of the variables is X <-> N1 <-> N2 <-> Y
	 */
	x = node1->prev;
	y = node2->next;
	if (x != NULL)
		x->next = node2;
	else
		*head = node2;
	node1->prev = node2;
	node1->next = y;
	node2->prev = x;
	node2->next = node1;
	if (y != NULL)
		y->prev = node1;
}


/**
 * insertion_sort_list - Implementation of insertion sort algorithm on list
 * @list: Linked list to be sorted
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *now, *before;

	/* Condition for failure*/
	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	for (now = (*list)->next; now && now->prev; now = now->next)
	{
		for (; now && now->prev && now->n < now->prev->n; now = now->prev)
		{
			before = now->prev;
			swap_nodes(list, before, now);
			print_list(*list);
			now = now->next;
		}
	}
}
