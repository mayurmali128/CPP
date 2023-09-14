//count number of digits in number
//reverse

#include<stdio.h>

int Reverse(int n){
    int res = 0;
    while(n !=0 ){
        int rem = n %10;
        n = n/10;
        res = (res*10) + rem;
    }
    return res;
}

int countDigit(int n){
    int cnt = 0;

    while(n !=0){
        cnt++;
        n = n/10;
    }
    return cnt;
}

int main(){
    int num1;
    printf("\n\t\t Enter No: ");
    scanf("%d",&num1);
    printf("\n\n\n");
    printf("\t\tReverse of number given number is %d ", Reverse(num1));
    printf("\n\t\tCount of digit of number is %d", countDigit(num1));
    printf("\n\n\n");

    return 0;
}