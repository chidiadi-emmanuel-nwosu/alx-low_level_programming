#include <math.h>
#include "search_algos.h"

/**
 * jump_search - function that searches for a value in an array
 *               of integers using the jump search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index where value is located
 *         -1 if value is not present in array or array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	size_t x, y, step;

	if (!array)
		return (-1);
	step = (size_t)sqrt(size);
	x = 0;
	y = step;
	do {
		printf("Value checked array[%lu] = [%i]\n", x, array[x]);
		x = y;
		y += step;
	} while (array[x] < value && x < size);
	x -= step;
	y -= step;

	printf("Value found between indexes [%lu] and [%lu]\n", x, y);

	for (; x <= y && x < size; x++)
	{
		printf("Value checked array[%lu] = [%i]\n", x, array[x]);
		if (array[x] == value)
			return (x);
	}

	return (-1);
}
