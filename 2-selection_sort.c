#include "sort.h"

/**
 * selection_sort - sorts an array in using the Selection sort algorithm
 * @array: array to sort
 * @size: size of the array
 *
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	unsigned int i, j, min;

	if (size < 2 || array == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
				min = j;
		}
		if (i != min)
		{
			swap(&array[i], &array[min]);
			print_array(array, size);
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
