#include<stdio.h>

int main(){
    int base,index;
    printf("Please enter the base: ");
    scanf("%d",&base);
    printf("Please enter the index: ");
    scanf("%d",&index);

    int result = 1;

    for(int i= 0; i<index; i++){
        result *= base;
    }

    printf("Result: %d", result);

    return 0;
}