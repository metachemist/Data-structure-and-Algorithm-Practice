#include <stdio.h>
void mergeSort(int arr, int start, int end){
    if(start<end){
        int middle = (start + end)/2;
        
    }
}

void merge(int arr[], int start, int end, int mid, int n){
    int i, j, k;
    int n1 = mid - start + 1;
    int n2 = end- mid;
    int l[30], r[30];
    for(int i=0; i<n; i++){
        
    }
}
void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
}
int main() {
    int arr[] = {23, 56, 43, 12, 5, 8, 33, 57, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    printArray(arr, n);
    return 0;
}