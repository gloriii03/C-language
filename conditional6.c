#include<stdio.h>
#include<string.h>

int main(){

    char password;
   printf("enter the password :");
   scanf("%c",&password);
   if(password==896744){
    printf("access grant ");
   }
   else
   printf("access denied");
    return 0;
}