#include "search_algos.h"

/**
  * advanced_binary_recursive - it searches recursively for a value in a sorted
  *                             array using binary search.
  * @array: points to the first element of the array to search.
  * @left: The starting index of the array to search.
  * @right: The ending index of the array to search.
  * @value: This is value to search for.
  *
  * Return: returns -1, when the value is absent
  *         Hence, the index where the value is located.
  *
  * Description: it prints the array being searched after every change.
  */
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (right < left)
		return (-1);

	printf("Searching in array: ");
	for (i = left; i < right; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	i = left + (right - left) / 2;
	if (array[i] == value && (i == left || array[i - 1] != value))
		return (i);
	if (array[i] >= value)
		return (advanced_binary_recursive(array, left, i, value));
	return (advanced_binary_recursive(array, i + 1, right, value));
}

/**
  * advanced_binary - Searches for a value 
  *                   of integers using advanced binary search.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: If the value is absent, -1.
  *         Hence, the first index where the value is located.
  *
  * Description: Prints the array being searched after every change.
  */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}
