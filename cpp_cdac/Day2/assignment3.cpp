//maximum element in the array
#include<iostream>
#include<stdio.h>

int findmax(int arr[], int size){
    int maxi = arr[0];
    for(int i= 1 ; i<size; i++){
        if(arr[i]>maxi)
            maxi = arr[i];
    }
    return maxi;
}

int main(){
    int n;
    int* arr = new int[n];

    printf("\t\t\tPlease Enter size of array: ");
    scanf("%d",&n);

    printf("\t\t\tPlease enter array elements:");
    
    for(int i= 0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    printf("\t\t\tMaximimum element is : %d", findmax(arr,n));

    delete arr;
    
    return 0;
}