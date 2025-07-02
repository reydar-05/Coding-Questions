//Linear Search: Search an element in an array
//Time Complexity: O(n)

#include <stdio.h>

int LinearSearch(int arr[],int size, int n){
    int i;
    for(i=0;i<size;i++){
        if (arr[i]==n){
            return i;
        }
    }
    return -1;
}

void PrintArray(int arr[], int size){
    int i;
    for(i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[]={5,4,3,2,1};
    int n= sizeof(arr)/ sizeof(arr[0]);
    
    printf("Original Array: ");
    PrintArray(arr,n);
    
    int num;
    printf("Enter number: ");
    scanf("%d",&num);
    
    int l=LinearSearch(arr,n,num);
    if(l==-1){
        printf("Element not present in the array");
    }
    else{
        printf("%d is present in the %d index",num,l);
    }
    return 0;
}
