#include<stdio.h>
#include<math.h>

int main(){
    double base,expo;
    printf("Enter base & expo: ");
    scanf("%lf%lf",&base,&expo);
    printf("power -> %.1lf",pow(base,expo));
    return 0;
}