//WAP to calculate the area and circumference of a circle given its radius 
#include<stdio.h>
#define PI 3.14159
int main(){
   float area , circumference , radious ;
   printf( "enter the radious of a circle:\n");
   scanf("%f", &radious);
   area = PI*radious*radious;
   printf("the area of the circle is %f\n",area);
   circumference = 2*PI*radious;
   printf("the cicumference of the circle is :%f",circumference);

    return 0;
}