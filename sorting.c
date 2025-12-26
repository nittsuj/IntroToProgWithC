#include <stdio.h>
#include <stdlib.h>

void printing(int *arr, int num) {
	for (int i = 0; i < num; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void bubbleSort (int *arr, int num) {
	int temp = 0;
	for (int i = 0; i < num-1; i++) {
		int swapped = 0;
		for (int j = 0; j < num-i-1; j++) {
			if (arr[j] > arr[j+1]) {
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				swapped = 1;
			}
		}
		if (swapped == 0)
			break;
	}
}

void insertionSort(int *arr, int num) {
	for (int i = 1; i < num; i++) {
		int temp = arr[i];
		int j = i - 1;

		while (j >= 0 && arr[j] > temp) {
			arr[j+1] = arr[j];
			j--;
		}

		arr[j+1] = temp;
	}
}

void selectionSort(int *arr, int num) {
	for (int i = 0; i < num; i++) {
		int min_id = i;
		
		for (int j = i+1; j < num; j++) {
			if (arr[j] < arr[min_id]) {
				min_id = j;
			}
		
		}
		
		int temp = arr[i];
		arr[i] = arr[min_id];
		arr[min_id] = temp;
	}
}

void merge(int *arr, int lowIndex, int midIndex, int highIndex) {
	int i,j,k; // i = element low;
		   // j = element after mid;
		   // // k = an element that is used to sort the array
	i = lowIndex, j = midIndex + 1,
	k = lowIndex; // we don't know that low starts at 0, it's inside an array
	
	int arrOther[highIndex+1];
	while (i <= midIndex && j <= highIndex) {
		if (arr[i] < arr[j]) {
			arrOther[k++] = arr[i++];
		}
		else {
			arrOther[k++] = arr[j++];
		}
	}

	for (; i <= midIndex; i++) {
		arrOther[k++] = arr[i];
	}
	for (; j <= highIndex; j++) {
		arrOther[k++] = arr[j];
	}
	for (i = lowIndex; i <= highIndex; i++) {
		arr[i] = arrOther[i];
	}
}

void mergeSort(int *arr, int lowIndex, int highIndex) {
	if (lowIndex < highIndex) {
		int midIndex = (lowIndex + highIndex) / 2;
		mergeSort(arr, lowIndex, midIndex);
		mergeSort(arr, midIndex+1, highIndex);
		merge(arr, lowIndex, midIndex, highIndex);
	}
}

int main() {
	int num = 0, *arr;
	scanf("%d", &num);
	if (num <= 0) return 1; 
	
	arr = (int*) malloc(num * sizeof(int));
	for (int i = 0; i < num; i++) {
		scanf("%d", &arr[i]);
	}
	
	//bubbleSort(arr, num);
	//printing(arr, num);

	//insertionSort(arr, num);
	//printing(arr, num);
	
	//selectionSort(arr,num);
	//printing(arr,num);
	
	mergeSort(arr, 0, num-1);
	printing(arr,num);

	free(arr);
	return 0;
}
