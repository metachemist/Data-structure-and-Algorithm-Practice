#include <stdio.h> 
/*Consider 0th index as min index and compare it with all other elements, if any element found which is less than the element in 0th index then swap those two elements and take min index as plus to the 0th index*/

void selectionSort(int arr[], int n){
    int minIndex, i, temp, j;
    for (i=0; i<n; i++){
        // n-1 cause I just need this iteration to execute till last index of array

        minIndex = i;
        for(j=i+1; j<n; j++){
            if(arr[j]<arr[minIndex]){
                minIndex = j;
            }
        }  
                temp = arr[minIndex];
                arr[minIndex] = arr[i];
                arr[i] = temp;
    }
}

void printArray(int arr[], int n){
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}


int main() {
    int arr[] = {2, 34, 5, 6, 78, 12, 22, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, n);
    printf("Sorted array : \n");
    printArray(arr, n);
    return 0;
}