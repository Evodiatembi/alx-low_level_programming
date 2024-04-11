#include "search_algos.h"
/**
 * binary_search - function that searches for a value in a sorted array
 * @array: pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for in the array
 * Return: The first index where value is located
 * or -1 if value is not found or if array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left, mid, k, right = size - 1;

	if (array != NULL)
	{
		while (left << 1 <= right)
		{
			mid = (left + right) / 2;
			printf("Searching in array: ");
			for (k = left; k < right; k++)
			{
				printf("%d, ", array[k]);
			}
			printf("%d\n", array[k]);
			if (array[mid] < value)
			{
				left = mid + 1;
			}
			else if (array[mid] > value)
			{
				right = mid - 1;
			}
			else
			{
				return (mid);
			}
		}
	}
	return (-1);
}
