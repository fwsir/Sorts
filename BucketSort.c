
#include "BucketSort.h"

// 对于整型数组的桶排序，每个桶里放置10个元素
void bucket_sort(int *arr, int size)
{
	int max, min, num, pos;
	int i, j, k;
	barrel *pBarrel;

	max = min = arr[0];
	for (i = 1; i < size; ++i)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
		else if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	num = (max - min + 1)/10 + 1;
	pBarrel = (barrel *)malloc(sizeof(barrel) * num);
	memset(pBarrel, 0, sizeof(barrel) * num);

	// put arr[i] into barrel which it belong to
	for (i = 0; i < size; ++i)
	{
		k = (arr[i] - min + 1) / 10;
		(pBarrel + k)->node[(pBarrel+k)->count++] = arr[i];
	}

	pos = 0;
	for (i = 0; i < num; ++i)
	{
		quick_sort((pBarrel+i)->node, 0, (pBarrel+i)->count-1);

		for (j = 0; j < (pBarrel+i)->count; ++j)
		{
			arr[pos++] = (pBarrel+i)->node[j];
		}
	}
	free(pBarrel);
}

// 对于float型数组的桶排序