#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * swap_node - Swaps two adjacent nodes in a doubly linked list
 * @list: Double pointer to the head of the list
 * @a: First node (left)
 * @b: Second node (right)
 */

void swap_node(listint_t **list, listint_t *a, listint_t *b)
{
	if (a->prev)
		a->prev->next = b;

	else
		*list = b;

	if (b->next)
		b->next->prev = a;

	a->next = b->next;
	b->prev = a->prev;
	b->next = a;
	a->prev = b;
}
/**
 * insertion_sort_list - Sorts a doubly linked list of integers
 *                       in ascending order using the insertion sort algorithm
 * @list: Double pointer to the head of the list
 *
 * Description: After each swap of two nodes, the list is printed
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *temp;
	listint_t *current;

	if (list == NULL)
		return;


	current = (*list)->next;
	while (current)
	{
		temp = current;
		while (temp->prev && temp->n < temp->prev->n)
		{
			swap_node(list, temp->prev, temp);
			print_list(*list);
		}

		current = current->next;
	}
}
