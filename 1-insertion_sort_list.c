#include "sort.h"

/**
 * swap_node - swap node
 *
 *@list: pointer to head list
 *@n1: 1st node swap
 *@n2: 2nd node swap
 */

void swap_node(listint_t **list, listint_t *n1, listint_t *n2)
{

	if (n1->prev)
		n1->prev->next = n2;

	else
		*list = n2;

	if (n2->next)
		n2->next->prev = n1;

	n1->next = n2->next;
	n2->prev = n1->prev;
	n1->prev = n2;
	n2->next = n1;

	if (*list == n1)
		*list = n2;
}

/**
 * insertion_sort_list - sort double list in ascending order
 *
 *@list: pointer to head list
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *cur = NULL, *ins = NULL, *temp = NULL;

	if (!list || !*list)
		return;

	cur = (*list)->next;

	while (cur != NULL)
	{
		ins = cur->prev;
		temp = cur->next;
		while (ins != NULL && ins->n > cur->n)
		{
			swap_node(list, ins, cur);
			print_list(*list);
			ins = cur->prev;
		}

		cur = temp;
	}
}
