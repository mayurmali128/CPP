//Print multiplication code

#include<stdio.h>

void multiTable(int n){
    for(int i= 1; i<=10; i++){
        printf(" \t\t\n %d * %d = %d", n, i, n*i);
    }
}

int main(){
    int n;

    printf("Please enter a number:");
    scanf("%d", &n);
    multiTable(n);
    return 0;
}