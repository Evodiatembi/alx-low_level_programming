#include "search_algos.h"
/**
*linear_search - Function that searches for a value in an array
*@array: pointer to the first element of the array to search in
*@size: Number of elements in array
*@value: Value to search for in the array
*Return: The first index where value is located
*or -1 if value is not found or if array is NULL
*/
int linear_search(int *array, size_t size, int value)
{
	size_t k;

	if (array != NULL)
	{
		for (k = 0; k < size; k++)
		{
			printf("Value compare array[%lu] = [%d]\n", k, array[k]);
			if (array[k] == value)
			{
				return (k);
			}
		}
	}
	return (-1);
}
