#include "sort.h"

/**
 * shell_sort - sort an array using shell sort and knuth sequence
 * @array: array to sort
 * @size: size of the array to sort
 *
 * Return: void
 */
void shell_sort(int *array, size_t size)
{
	int j;
	size_t i, h;

	if (array == NULL || size < 2)
		return;

	for (h = 1; h <= (size - 1) / 3; h = 3 * h + 1)
		;

	while (h > 0)
	{
		for (i = h; i < size; i++)
		{
			for (j = i - h; j >= 0; j -= h)
			{
				if (array[j] > array[j + h])
					swap(&array[j], &array[j + h]);
				else
					break;
			}
		}
		h /= 3;
		print_array(array, size);
	}
}

/**
 * swap - swap two variables
 * @a: The first integer
 * @b: The second integer
 * Return: void
 */
void swap(int *a, int *b)                                                          {
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
