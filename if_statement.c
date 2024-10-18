#include<stdio.h>

int main(){
float math,gk,english,hindi,science,avrage,percantage,total;
printf("enter the marks of maths:");
scanf("%f",&math);
printf("enter the marks of gk:");
scanf("%f",&gk);
printf("enter the marks of english:");
scanf("%f",&english);
printf("enter the marks of hindi:");
scanf("%f",&hindi);
printf("enter the marks of science:");
scanf("%f",&science);
total=math+gk+english+hindi+science;
avrage= total/5;
percantage=(total/500)*100;
printf("your marks is %f\n",total);
printf("your avrage is %f\n",avrage);
printf("your percenatge is %.2f%%\n",percantage);
    if (percantage >= 80) {
    printf("your grade is A+");
} 
else if (percantage >= 70 && percantage < 80) {
    printf("your grade is A");
} 
else if (percantage > 50 && percantage < 70) {
    printf("your grade is B");
} 
else if (percantage > 30 && percantage < 50) {
    printf("your grade is C");
} 
else {
    printf("you are fail !!");
}
    return 0;
}