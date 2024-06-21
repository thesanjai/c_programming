// Find area of rectangle 

#include<stdio.h>

int main(){
    float length;
    float breadth;
    printf("Enter the length & breadth : ");
    scanf("%f%f",&length,&breadth);

    printf("Area of rectangle:%.2f",length*breadth);
    return 0;
}