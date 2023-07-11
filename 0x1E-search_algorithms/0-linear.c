#include "search_algos.h"
/**
 * linear_search - this is the function for linear search
 * @array: the array tha will be searched
 * @size: actual size of the array
 * @value: the search value in the array 
 * Return: the index of the value found or -1 on failure
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}