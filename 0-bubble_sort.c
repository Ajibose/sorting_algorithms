#include "sort.h"

/**
 * bubble_sort - Sorts an array in ascending order using bubble sort
 * @array: Array to sort
 * @size: The size of array to sort
 *
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	unsigned int swapped, i, j;

	if (array == NULL || size == 0)
		return;

	swapped = 1;
	for (i = 0; i < size && swapped; i++)
	{
		swapped = 0;
		for (j = 0; j < size - i - 1; j++)
			if (array[j + 1] < array[j])
			{
				swap(&array[j + 1], &array[j]);
				print_array(array, size);
				swapped = 1;
			}
	}
}

/**
 * swap - swap two variables
 * @a: The first integer
 * @b: The second integer
 *
 * Return: void
 */
void swap(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
