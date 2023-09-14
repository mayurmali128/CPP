#include<stdio.h> 

int main(){
    int number;
    printf("Please Enter positive number: ");
    scanf("%d",&number);
    if(number==1){
        printf("Int is neither prime not composite.");
    }
    int i = 2;
    for(i=2; i<number; i++){
        if(number%2==0){
            printf("The number is not prime.");
            break;
        }
    }
    if(i==number) printf("The number is prime.");
    
    return 0;
}