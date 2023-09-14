// diffrence between max and min in array

#include<stdio.h>

int Differance(int arr[], int size){
    int maxi = arr[0];
    int mini = arr[0];

    for(int i=1; i<size; i++){

        if(arr[i]>maxi)
            maxi = arr[i];
        
        if(arr[i]<mini)
            mini = arr[i];
    }
    
    return maxi - mini;

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

    printf("\t\t\t Differance between maximum and minimum is %d", Differance(arr,n));

    delete arr;

    return 0;
}