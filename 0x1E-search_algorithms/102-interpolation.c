#include "search_algos.h"

/**
 * interpolation_search - function that searches for a value in an array
 *                        of integers using the interpolation search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index where value is located
 *         -1 if value is not present in array or array is NULL
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high;

	if (!array)
		return (-1);

	low = 0;
	high = size - 1;

	while (low <= high)
	{
		size_t pos;

		pos = low + (
			((double)(high - low) / (array[high] - array[low])) * (value - array[low])
			);

		if (pos >= size)
		{
			printf("Value checked array[%lu] is out of range\n", pos);
			return (-1);
		}
		printf("Value checked array[%lu] = [%i]\n", pos, array[pos]);

		if (array[pos] == value)
			return (pos);
		else if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}

	return (-1);
}
