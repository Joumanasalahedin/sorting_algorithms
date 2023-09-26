#include "sort.h"

/**
  * quick_sort - sorts an array of integers
  * in ascending order
  * @array: input array
  * @size: size of the array
  * Return: no return
  */

void quick_sort(int *array, size_t size)
{
	_qsort(array, 0, size - 1, size);
}

/**
  * _qsort - helper function
  * @array: input array
  * @low: index of the first element
  * @high: index of the last element
  * @size: size of the array
  * Return: no return
  */

void _qsort(int *array, int low, int high, int size)
{
	int h, l, i;
	int tmp;

	if (low < high)
	{
		h = high;
		l = low;
		for (i = low; i < high; i++)
		{
			if (array[i] < array[h])
			{
				if (i != l)
				{
					tmp = array[i];
					array[i] = array[l];
					array[l] = tmp;
					print_array(array, size);
				}
				l++;
			}
		}
		if (l != h && array[l] != array[h])
		{
			tmp = array[l];
			array[l] = array[h];
			array[h] = tmp;
			print_array(array, size);
		}
		_qsort(array, low, l - 1, size);
		_qsort(array, l + 1, high, size);
	}
}
