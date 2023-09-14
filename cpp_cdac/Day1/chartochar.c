#include<stdio.h>

int main(){
    char ch;
    printf("Please enter any character: ");
    scanf("%c",&ch);

    if(ch<='z' && ch>='a'){
        printf("The opposite charater id %c", ch-32);
    }
    else if(ch<='Z' && ch>='A'){
        printf("The opposite charater id %c", ch+32);
    }
    else if(ch>='0'&& ch<='1'){
        printf("The character is number");
    }
    else{
        printf("Character is symbol");
    }

    return 0;

}