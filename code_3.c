// write a program to calculate the area and perimeter of a rectangle given its
// lenght and breadth

#include<stdio.h>
int main (){
    float area , perimeter , lenght , breadth ;
    printf("enter the lenght :\n");                                                                                                                                                                                                     
    scanf("%f",&lenght);
    printf("enter the breadth :\n");
    scanf("%f",&breadth);
    area =lenght*breadth;
    printf("the area of the reactangle %f",area);
    perimeter = 2*(lenght+breadth);
    printf("the perimeter of rectangle %f",perimeter);

    return 0;
}
