//Leap year checking
#include <stdio.h>
int main(){
    int n;
    printf("Enter the year: ");
    scanf("%d",&n);
    printf("%d is %s",n,n%4==0?(n%100==0?(n%400==0?"leap year":"not a leap year"):"leap year"):"not a leap year");
    return 0;
}