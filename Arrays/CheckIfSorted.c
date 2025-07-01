//Check if array is sorted

//Optimal solution: O(n) time complexity

#include<stdio.h>

void CheckIfSorted(int arr[],int size){
    int i;
    for(i=0;i<size-1;i++){
            if(arr[i]>arr[i+1]){
            printf("Not sorted");
            break;
            }
        }
}

void printArray(int arr[],int size){
    int i;
    for(i=0;i<size;i++){
        printf("%d",arr[i]);
    }
    printf("\n");
}

int main(){
    int arr[]={5,4,6,7,8};
    int n= sizeof(arr)/ sizeof(arr[0]);

    printArray(arr,n);
    CheckIfSorted(arr,n);

    return 0;
}
