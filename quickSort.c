#include <stdio.h>
#include <stdlib.h>

void printing(int *arr, int num) {
	for (int i = 0; i < num; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

// using Hoare Partition
int partition(int *arr, int lowIndex, int highIndex) {
	int pivot = arr[lowIndex];
	int i = lowIndex-1,
	    j = highIndex+1;

	while (1) {
		do {
			i++;
		} while (arr[i] < pivot);

		do {
			j--;
		} while (arr[j] > pivot);
		
		if (i >= j)
			return j;

		//if (i < j)		// if i is bigger than j, it would stop 
		swap(&arr[i], &arr[j]);
	}
	//swap(&arr[lowIndex], &arr[j]);	// the last case where the pivot would be in the index 'j' value
	//return j;
}

void quickSort(int *arr, int lowIndex, int highIndex) {
	if (lowIndex < highIndex) {
		int res = partition(arr, lowIndex, highIndex);
		quickSort(arr, lowIndex, res);
		quickSort(arr, res+1, highIndex);
	}
}

int main() {
	int num[5] = {0, 2, 9, 9, 1};
	int n = sizeof(num)/sizeof(num[0]);
	
	quickSort(num, 0, n-1);
	//printing(num, n);
	for (int i = 0; i < n; i++)
		printf("%d ", num[i]);
	printf("\n");
	return 0;
}
