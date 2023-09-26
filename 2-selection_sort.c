#include "sort.h"

/**
  * selection_sort - sorts an array of integers
  * in ascending order
  * @array: input array of integers
  * @size: size of the array
  * Return: no return
  */

void selection_sort(int *array, size_t size)
{
	int tmp;
	size_t i, j, min;

	for (i = 0; i < size; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
				min = j;
		}
		if (min != i)
		{
			tmp = array[min];
			array[min] = array[i];
			array[i] = tmp;
			print_array(array, size);
		}
	}
}
