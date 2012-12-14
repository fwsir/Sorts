
#include "BubbleSort.h"

void bubble_solt(int arr[], int size)
{
	int i, j;
	for (i = 0; i < size; ++i)
	{
		for (j = i+1; j < size; ++j)
		{
			if (arr[j] < arr[i])
			{
				swap(&arr[j], &arr[i]);
			}
		}
	}
}

void swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

