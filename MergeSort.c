#include <stdio.h>
#include <string.h>
#include <malloc.h>
#include <assert.h>

void merge(int arr[], int start, int mid, int end)
{
	int length = end - start + 1;
	int all = 0;
	int left = start;
	int right = mid + 1;
	int *pTmp = (int *)malloc(sizeof(int)*length);
	assert(NULL != pTmp);

	// 需要进行比较，所以要初始置0
	memset(pTmp, 0, length);

	while (right <= end)
	{
		while ((arr[left]<=arr[right]) && (left<=mid))
		{
			pTmp[all++] = arr[left++];
		}
		if (left > mid)
		{
			break;
		}
		while ((arr[left]>arr[right]) && (right<=end))
		{
			pTmp[all++] = arr[right++];
		}
	}

	if (left <= mid)
	{
		memmove(&pTmp[all], &arr[left], sizeof(int)*(mid-left+1));
	}
	if (right <= end)
	{
		memmove(&pTmp[all], &arr[right], sizeof(int)*(end-right+1));
	}

	memmove(&arr[start], pTmp, sizeof(int)*length);
	free(pTmp);
}

void merge_sort(int arr[], int start, int end)
{
	int mid;
	// 判断子问题结束情况
	if (start < end)
	{
		// (end-start) >> 1 等价于 /2
		mid = start + ((end-start) >> 1);

		merge_sort(arr, start, mid);
		merge_sort(arr, mid + 1, end);
		merge(arr, start, mid, end);
	}
}


