#include <stdbool.h>
#include <stdio.h>

void Swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}


void BubbleSort(int a[], int n)
{
    int i, j;
	bool swapped;
	for (i = 0; i < n - 1; i++)
    {
		swapped = false;
		for (j = 0; j < n - i - 1; j++)
        {
			if (a[j] > a[j + 1])
			{
				Swap(&a[j], &a[j + 1]);
				swapped = true;
			}
		}
		if (swapped == false)
			break;
    }
}

void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
}

int main()
{
	int arr[] = {24,23,54,867,45,56,98,45,34,87};
	int n = sizeof(arr) / sizeof(arr[0]);
	BubbleSort(arr, n);
	printf("Sorted array: \n");
	printArray(arr, n);
	return 0;
}
