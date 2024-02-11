#include <stdio.h>
#include<math.h>

void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int partition (int arr[], int lowerBound, int upperBound) {
    int pivot = arr[lowerBound]; 
    int start = lowerBound;
    int end = upperBound;

    while(start<end){
        while(arr[start]<=pivot){
            start++;
        }
        while(arr[end]>=pivot){
            end--;
        }
        if(start<end){
            swap(&arr[start], &arr[end]);
        }
    }
    swap(&arr[lowerBound], &arr[end]);
    return end;
}
//Recursively calling partition function.
void quickSort(int arr[], int lowerBound, int upperBound) {
    if (lowerBound < upperBound) {
        int location = partition(arr, lowerBound, upperBound);

        quickSort(arr, lowerBound, location - 1);
        quickSort(arr, location + 1, upperBound);
    }
}

void printArray(int arr[], int size) {
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    printArray(arr, n);
    quickSort(arr, 0, n-1);
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}