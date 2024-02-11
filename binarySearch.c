#include<stdio.h>

int binarysearch(int arr[], int x, int n){
    int low, mid, high;
    low = 0;
    high = n-1;
    // "for" loop here wouldnt be the good practice cause in this case scenario we've to sure about the number of iteration needed, and cause potential error.  
    while(low<=high){
        mid = (low + high)/2;
        if(arr[mid] == x){
        return mid;  
        }
        if (arr[mid] < x){
        low = mid + 1;
        }
        else{
        high = mid - 1; 
        }
    }
   return -1;
}

int main (){
    int arr[]={12, 23, 34, 45, 56, 69, 78, 89, 90};
    int x = 69;
    int n = sizeof(arr)/ sizeof(arr[0]);
    int result = binarysearch(arr, x, n);
    (result == -1)? printf("Element not found in array") : printf("Element found at %d", result);
    return 0;

}