//Largest element in an array

//1. Using brute force: O(n^2) time complexity 
#include <stdio.h>

void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void LargestElement(int arr[], int size){
	printf("%d",arr[size-1]);
}

int main() {
    int arr[] = {8,10,5,7,9};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: \n");
    printArray(arr, n);

    bubbleSort(arr, n);

    printf("Sorted array: \n");
    printArray(arr, n);
    
    printf("Largest Element: ");
    LargestElement(arr,n);

    return 0;
}


//2. Using recursion: O(n) time complexity
#include<stdio.h>

void PrintArray(int arr[],int size){
    int i;
    for(i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int LargestElement(int arr[],int size){
    int i,temp=arr[0];
    for(i=0;i<size;i++){
        if(arr[i]>temp){
            temp=arr[i];
        }
    }
    return temp;
}

int main(){
    int arr[]={8,10,5,7,9};
    int n= sizeof(arr)/ sizeof(arr[0]);

    printf("Array is: ");
    PrintArray(arr,n);

    printf("Largest number is: %d", LargestElement(arr,n));

    return 0;
}
