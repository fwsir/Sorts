
#include "InsertSort.h"

void insert_sort(int *arr, int size)
{
	// kÎªÉÚ±ø
	int i, j, k;
	for (i = 1; i < size; ++i)
	{
		k = arr[i];
		for (j = i-1; j >= 0 && arr[j] > k; --j)
		{
			arr[j+1] = arr[j];
		}
		arr[j+1] = k;
	}
}

