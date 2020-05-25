#include "functions.h"

void insertionSort(int array[], int length)
{
	int i, j, k;

	for(i = 1; i < length; i++)
	{
		k = array[i];
		j = i - 1;

		while(j >= 0 && array[j] > k)
		{
			array[j + 1] = array[j];
			j = j - 1;
		}
		array[j + 1] = k;
	}

	return;
}


void insertionSortPointers(int * array, int length)
{
	int i, j, k;

	for(i = 1; i < length; i++)
	{
		k = *(array + i);
		j = i - 1;

		while(j >= 0 && *(array + j) > k)
		{
			*(array + (j + 1)) = *(array + j);
			j = j - 1;
		}
		*(array + (j + 1)) = k;
	}

	return;
}