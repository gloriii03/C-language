#include<stdio.h>

int main(){
    int number;
    printf("enter the number:");
    scanf("%d",&number);
       if(number%2==0){
        printf("this number is even");
    }
    else if (number%2==1){
printf("the number is odd");
    }
    return 0;
}