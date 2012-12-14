
#include "ShellSort.h"

// Ï£¶ûÅÅÐò_Ô­°æ
void shell_sort(int arr[], int size)
{
	int i, j, d;
	for (d = size/2; d > 0; d /= 2)
	{
		for (i = d+1; i <= size; ++i)
		{
			if (arr[i] < arr[i-d])
			{
				arr[0] = arr[i];
				for (j = i-d; j > 0 && arr[0] < arr[j]; j -= d)
				{
					arr[j+d] = arr[j];
				}
				arr[j+d] = arr[0];
			}
		}
	}
}

// Ï£¶ûÅÅÐò£¿£¿£¿

