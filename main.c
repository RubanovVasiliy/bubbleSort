#include <stdio.h>

void bubbleSort(int arr[], int size) {
	int swapped;
	int temp;

	do {
		swapped = 0;
		for (int i = 0; i < size - 1; i++) {
			if (arr[i] > arr[i + 1]) {
				temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
				swapped = 1;
			}
		}
	} while (swapped);
}

void printArray(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
}

void inputArray(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		scanf("%d", &arr[i]);
	}
}

int main(void) {
	printf("Input length of the array: ");
	int size;
	scanf("%d", &size);
	while(size<=0)
	{
	 printf("Enter a size greater than 0\n");
	 scanf("%d",&size);
	}

	printf("Input elements of array: ");
	int arr[size]; //I think this won't work before C99 versions
	inputArray(arr, size);

	bubbleSort(arr, size);
	printArray(arr, size);

	return 0;
}
