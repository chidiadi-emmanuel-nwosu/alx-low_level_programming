#include "search_algos.h"

/**
 * exponential_search - function that searches for a value in an array
 *                      of integers using the exponential search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index where value is located
 *         -1 if value is not present in array or array is NULL
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t step, start, stop;

	if (!array)
		return (-1);

	step = 1;

	while (step < size && array[step] < value)
	{
		printf("Value checked array[%lu] = [%i]\n", step, array[step]);
		step *= 2;
	}

	start = step / 2;
	stop = (step < size) ? step + 1 : size;
	printf("Value found between indexes [%lu] and [%lu]\n", start, stop - 1);

	return (search(array, start, stop, value));
}


/**
 * search - searches the aray recursively
 *
 * @array: pointer to the first element of the array to print
 * @start: print start
 * @stop: print stop
 * @value: value to search for
 *
 * Return: first index where value is located
 *         -1 if value is not present in array or array is NULL
 */
int search(int *array, int start, int stop, int value)
{
	int index;

	if (!(stop - start) && value != array[0])
		return (-1);

	print_array(array, start, stop);

	index = (start + stop - 1) / 2;

	if (value == array[index])
		return (index);
	if (value > array[index])
		return (search(array, index + 1, stop, value));
	else
		return (search(array, start, index, value));
}


/**
 * print_array - prints array
 *
 * @array: pointer to the first element of the array to print
 * @start: print start
 * @stop: print stop
 */
void print_array(int *array, size_t start, size_t stop)
{
	printf("Searching in array: ");
	for (; start < stop; start++)
		printf("%i%s", array[start], (start < stop - 1) ? ", " : "\n");
}

