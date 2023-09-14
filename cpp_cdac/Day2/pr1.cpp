#include<iostream>
#include<stdio.h>

void solve(int arr[], int n){
    for(int i=0; i<n; i++){
        arr[i] /= 2;
    }
}

int main(){
    int n;
    int* arr = new int[n];

    printf("\t\t\t Please Enter size of array: ");
    scanf("%d",&n);

    printf("\t\t\t Please enter array elements:");
    
    for(int i= 0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    // int* pass= solve(arr,n);

    // for(int i=0; i<n; i++)
    //     printf(" %d ",pass[i]);

    solve(arr,n);

    for(int i=0; i<n; i++){
        printf("%d",arr[i]);
    }

    delete arr;
}
