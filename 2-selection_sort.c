#include "sort.h"

/**
* swap - Swaps two integers in memory
* @a: Pointer to first integer
* @b: Pointer to second integer
*/

void swap(int *a, int *b)
{
	int temp = 0;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
* selection_sort - Sorts an array of integers in ascending order
*                  using the Selection sort algorithm*
* @array: The array of integers to sort
* @size: The number of elements in the array
*/

void selection_sort(int *array, size_t size)
{
	size_t i, j, min;

	for (i = 0; i < size - 1; i++)
	{
		min = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
				min = j;
		}

		if (min != i)
		{
			swap(&array[i], &array[min]);
			print_array(array, size);
		}
	}
}
