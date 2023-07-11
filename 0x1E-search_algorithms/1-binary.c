#include "search_algos.h"
/**
 * binary_search - it uses binary search in an array
 * @array: array to be searched
 * @size: actual size of the array
 * @value: search value
 * Return: found value or -1 on failure
*/
int binary_search(int *array, size_t size, int value)
{
	size_t start = 0, end = size, mid, i;

	while (start < end)
	{
		printf("Searching in array: ");
		for (i = start; i < end - 1; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[end - 1]);

		mid = midpoint(start, end);
		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			end = mid;
		else
			start = mid + 1;
	}
	return (-1);
}
/**
 * midpoint - used to get the mid point of two numbers
 * @start: the lower number
 * @end: the higher number
 * Return: midpoint number
*/
size_t midpoint(size_t start, size_t end)
{
	int num = start + end;

	if (num % 2 == 0)
		num = num / 2 - 1;
	else
		num = num / 2;
	return (num);
}
