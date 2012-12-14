
#include "MergeSort.h"
#include "InsertSort.h"
#include "BucketSort.h"
#include "ShellSort.h"
#include "BubbleSort.h"
#include "QuickSort.h"
#include <stdio.h>

int main()
{
	int i;
	int A[10] = {6, 5, 8, 4, 7, 2, 10, 3, 1, 9};
	//int A[] = {0, 1, 5, 4, 3, 7, 6, 2};
	// MergeSort演示
	//merge_sort(A, 0, 9);

	// InsertSort演示
	//insert_sort(A, 10);

	// ShellSort演示
	//shell_sort(A, 7);

	// BubbleSort演示
	//bubble_solt(A, 10);

	// QuickSort演示
	//quick_sort(A, 0, 9);

	// BucketSort演示
	bucket_sort(A, 10);

	for (i = 0; i < 10; ++i)
		printf("%d\t", A[i]);
	printf("\n");

	return 0;
}

// main()   
// {   
//     int data[] = {78, 17, 39, 26, 72, 94, 21, 12, 23, 91}, i;   
//     int size = sizeof(data) / sizeof(int);   
//     bucket_sort(data, size);   
//   
//     for (i = 0; i < size; i++)   
//         printf("%d ", data[i]);   
// }  
