//find avg in the array element

#include<iostream>
#include<stdio.h>

double average(int arr[], int size){
    double sum = 0;

    for(int i =0; i<size; i++){
        sum += arr[i];
    }

    return sum/size;
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

    printf("\t\t\t Average of a number is %f ", average(arr,n));
    delete arr;
    return 0;
}