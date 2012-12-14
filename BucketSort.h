#pragma once

#include "QuickSort.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct barrel
{
	int  node[10];
	int count;
}barrel;

extern void quik_sort(int arr[], int low, int high);

void bucket_sort(int *arr, int size);
