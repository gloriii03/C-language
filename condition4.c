//A program likho jo user se total marks (5 subjects ke) le aur percentage calculate kare. Uske baad conditional statements ka use karke grade assign kare:

#include<stdio.h>
int main(){
    float sub1,sub2,sub3,sub4,sub5,total,percentage;
    printf("enter the all subject marks :");
    scanf("%f%f%f%f%f",&sub1,&sub2,&sub3,&sub4,&sub5);
     total=sub1+sub2+sub3+sub4+sub5;
     percentage=(total/500.0)*100;
     printf("your total number is %f\n",total);
     printf("your percentage is %.2f%%\n",percentage);
     if(percentage>=90){
        printf("your grade is A+");
     }
     else if(percentage>=70 &&percentage<90){
        printf("your grade is A");
     }
     else if(percentage>=50 && percentage<70){
        printf("your grade is b ");
     }
     else if (percentage<50 && percentage>30){
        printf("your gerade is c ");
     }
     else
     printf("you are fail !!");
     
    return 0;
}