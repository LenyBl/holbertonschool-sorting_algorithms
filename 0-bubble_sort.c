#include "sort.h"
/**
 *
 * bubble_sort - Sorts an array of integers in ascending order
 *                 using the Bubble sort algorithm
 *
 * @array: The array to be sorted
 * @size: The size of the array
 *
 */
void bubble_sort(int *array, size_t size)
{
	int i = 0;
	int j = 0;
	int temp;

	for (i; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
}
