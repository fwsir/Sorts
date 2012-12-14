
#include "QuickSort.h"

int patition(int arr[], int low, int high)
{
	int k = arr[low];
	while (low < high)
	{
		// ��whileѭ�������в�Ҫ����high--
		while (low < high && arr[high] >= k)
			--high;

		arr[low] = arr[high];
		// ͬ�������в�Ҫ����low--��������һ��,
		// ���������۳�����񶼻ᱻִ�У���������ʧ��ʱ����Ҫִ��
		while (low < high && arr[low] <= k)
			++low;

		arr[high] = arr[low];
	}
	arr[low] = k;
	return low;
}

void quick_sort(int arr[], int low, int high)
{
	int n;
	if (low < high)
	{
		n = patition(arr, low, high);
		quick_sort(arr, low, n-1);
		quick_sort(arr, n+1, high);
	}
}
