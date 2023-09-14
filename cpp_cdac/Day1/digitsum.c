#include<stdio.h> 

int main(){
    int number;

    printf("Please enter a number: ");
    scanf("%d",&number);

    int sum = 0;

    while(number!=0){
        sum += number % 10;
        number = number / 10;
    }

    printf("The sum of digit of number is %d", sum);

    return 0;
}