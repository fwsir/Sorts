
#include "QuickSort.h"

int patition(int arr[], int low, int high)
{
	int k = arr[low];
	while (low < high)
	{
		// 在while循环条件中不要连用high--
		while (low < high && arr[high] >= k)
			--high;

		arr[low] = arr[high];
		// 同理条件中不要连用low--来代替下一句,
		// 因条件无论成立与否都会被执行，而在条件失败时不需要执行
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

