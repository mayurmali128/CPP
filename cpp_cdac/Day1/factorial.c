#include<stdio.h> 

int main(){
    int number, fact = 1;
    printf("Please Enter number: ");
    scanf("%d",&number);

    for(int i=1; i<=number;i++){
        fact *= i;
    }

    printf("Factorial of number is: %d",fact);
    
    return 0;
}