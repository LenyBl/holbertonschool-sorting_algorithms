#include "sort.h"
/**
 * quick_sort - Sorts an array of integers in ascending order
 *
 * @array: Pointer to the array of integers to be sorted.
 * @size: The number of elements in the array.
 *
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
	size_t i, j;
	int pivot, temp;

	if (array == NULL || size < 2)
		return;

	pivot = array[size / 2];
	i = 0;
	j = size - 1;

	while (i <= j)
	{
		while (array[i] < pivot)
			i++;
		while (array[j] > pivot)
			j--;
		if (i <= j)
		{
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
			print_array(array, size);
			i++;
			if (j > 0)
				j--;
		}
	}

	if (j > 0)
		quick_sort(array, j + 1);
	quick_sort(array + i, size - i);
}
