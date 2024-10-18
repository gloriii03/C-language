#include<stdio.h>

int main(){
   int  num1,num2,num3;
   printf("enter the number :");
   scanf("%d%d%d",&num1,&num2,&num3);
   if(num1>num2 &&num1>num3){
    printf("the capital number is A %d",num1);
       }
    else if (num2>num1 &&num2>num3){
        printf("the capiatl number is b %d",num2);
    }
    else 
    printf("num3 is greater %d",num3);

    return 0;
}