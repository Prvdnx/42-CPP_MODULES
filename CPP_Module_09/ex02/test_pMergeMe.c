#include	<stdio.h>

#define SIZE 45

void	mergeInsertionSortVector(int *arr, int start, int end);
void	merge(int *arr, int start, int mid, int end);

int	main()
{
	//! showMemory(start=65520)
	//! showArray(arr, cursors[i])
	int	arr[SIZE] = {22, 45, 12, 8, 10, 6, 72, 81, 33, 15, 17, 30, 24, 50, 5, 19, 20, 4, 60, 25, 16, 28, 40, 11, 38, 9, 7, 14, 32, 18, 13, 35, 26, 27, 21, 36, 3, 55, 29, 23, 2, 42, 31, 1, 37};

	printf("Original Array:\n");
	for (int i = 0; i < SIZE; i++)
		printf("%d ", arr[i]);
	printf("\n");

	mergeInsertionSortVector(arr, 0, SIZE - 1);

	printf("\nSorted Array:\n");
	for (int i = 0; i < SIZE; i++)
		printf("%d ", arr[i]);
	printf("\n");

	return (0);
}

void	mergeInsertionSortVector(int *arr, int start, int end)
{
	if (start < end)
	{
		if (end - start <= 20)
		{
			for (int i = start + 1; i <= end; i++)
			{
				int key = arr[i];
				int j = i - 1;
				while (j >= start && arr[j] > key)
				{
					arr[j + 1] = arr[j];
					--j;
				}
				arr[j + 1] = key;
			}
		}
		else
		{
			int mid = (start + end) / 2;
			mergeInsertionSortVector(arr, start, mid);
			mergeInsertionSortVector(arr, mid + 1, end);
			merge(arr, start, mid, end);
		}
	}
}

void	merge(int *arr, int start, int mid, int end)
{
	//! showArray(temp, cursors[i])
	int	temp[end - start + 1];
	int	i = start, j = mid + 1, k = 0;

	while (i <= mid && j <= end)
		temp[k++] = arr[i] <= arr[j] ? arr[i++] : arr[j++];

	while (i <= mid)
		temp[k++] = arr[i++];

	while (j <= end)
		temp[k++] = arr[j++];

	for (i = start, k = 0; i <= end; i++, k++)
		arr[i] = temp[k];
}
