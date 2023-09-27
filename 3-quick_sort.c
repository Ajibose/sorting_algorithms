#include "sort.h"

/**
 * quick_sort_ - recursively sort an array
 * @array: Array to sort
 * @size: size of array to sort
 * @low: the value to start iterating from
 * @high: where to stop iteration
 *
 * Return: void`
 */
void quick_sort_(int *array, size_t size, size_t low, size_t high)
{
	size_t pi;

	if (low < high && high < size)
	{
		pi = partition(array, size, low, high);
		quick_sort_(array, size, pi + 1, high);
		quick_sort_(array, size, low, pi - 1);
	}
}

/**
 * partition - parttion array into two sub arrays
 * @array: array to sort
 * @size: size of array
 * @low: the value to start iterating from
 * @high: where to stop iteration
 *
 * Return: the index of partitioning
 */
size_t partition(int *array, size_t size, size_t low, size_t high)
{
	int pi;
	size_t i, j = low - 1;

	pi = array[high];

	for (i = low; i <= high - 1; i++)
	{
		if (array[i] <= pi)
		{
			j++;
			swap(&array[j], &array[i]);
			print_array(array, size);
		}
	}
	swap(&array[j + 1], &array[high]);
	print_array(array, size);
	return (j + 1);
}

/**
 * quick_sort - sorts an array using the Quick sort algorithm
 * @array: Array to sort
 * @size: size of array to sort
 *
 * Returin: void
 */
void quick_sort(int *array, size_t size)
{
	quick_sort_(array, size, 0, size - 1);
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
