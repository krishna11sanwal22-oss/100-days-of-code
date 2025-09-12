// write a program to input two nubers and display their sum , diffrence ,and quotient
#include<stdio.h>
int main(){
int num1,num2;
int sum,diffrence,product;
float quotient;

printf("enter the first number");
scanf("%d",&num1);
printf("enter the second number");
scanf("%d",&num2);
int c;
c = num1+num2;
printf("sum of num1 anmd num2 = %d\n",c);
int d;
d =num1-num2;
printf("diffrence of num1 and num2 =%d\n",d);
int e =num1*num2;
printf("product of num1 amd num2 = %d\n",e);
float f;
f = num1/num2;
printf("quotient of num1 and num2 = %f\n",f);
    return 0;
}