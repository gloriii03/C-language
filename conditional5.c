//Write a C program jo user se year input kare aur check kare ki kya woh leap year hai ya nahi.
#include<stdio.h>

int main(){
    int year;
    printf("enter the year :");
    scanf("%d",&year);
    if(year%400==0 ){
        printf("this is leap year");
    }
    else if(year%100==0){
        printf("this is not year");
    }
    else if(year%4==0){
        printf("this is leap year");
    }
    else
    printf("this is not a leap year");
  return 0;
}