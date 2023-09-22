#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list using Insertion sort
 * @list: Double pointer to the head node
 *
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *ptr = *list, *temp, *temp2;

	if (list == NULL || !(*list) || !((*list)->next))
		return;

	while (ptr != NULL)
	{
		temp2 = ptr;
		temp = ptr->prev;
		ptr = ptr->next;
		while (temp != NULL && temp2->n < temp->n)
		{
			temp->next = temp2->next;
			/*
			 * if (temp2->next != NULL)
			 *	temp2->next->prev = temp;
			 */
			temp2->next = temp;
			temp2->prev = temp->prev;
			temp->prev = temp2;
			if (temp2->prev != NULL)
				temp2->prev->next = temp2;
			if (temp->next != NULL)
				temp->next->prev = temp;
			if (temp2->prev == NULL)
				*list = temp2;
			if (temp->prev != NULL)
				temp = temp->prev->prev;
			print_list(*list);
		}
	}
}
