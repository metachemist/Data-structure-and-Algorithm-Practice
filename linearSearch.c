//linear search 
#include<stdio.h>
// x = unknown ; n = number of elements
int linearsearch(int arr[],int n, int x){
    for(int i=0; i<n; i++){
        if(arr[i] == x){    // arr[i] not i
            return i;
        } 
    }                   
    return -1;
}

int main (){
    int arr[]={1, 4, 5, 7, 8, 2, 9};
    int x = 9;
    int n = sizeof(arr)/ sizeof(arr[0]);
    //sizeof(arr): total size of array , sizeof(arr[0]): size of the data type of element array, dividing these two ensures that code remains correct even if the data type of the element changes
    
    int result = linearsearch(arr, n, x);   
    if(result == -1){
        printf("element not found");
    } 
    else  
    {
        printf("element is found at %d th position at index %d", result+1, result);   
    }
    /*(result == -1)? printf("Element not found") : printf("Element is found at index %d", result);*/
    return 0;
}