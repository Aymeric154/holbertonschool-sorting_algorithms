#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * bubble_sort - function thats sort an array of integers
 * in ascending order with the bubble sort
 *
 * @array: pointer to the array
 * @size: size of array
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{

				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;

				print_array(array, size);
			}
		}
	}
}
