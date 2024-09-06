//SUM OF THE INDIVIDUAL DIGITS 
#include<stdio.h>

int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);

    n%9==0?printf("sum of the digits is 9\n"):printf("sum of the digits is %d",n%9);

    return 0;
}

/*
    NOTES
    if any number divides by 9 then sum of the individual digits is 9
    else
    the sum of individual digits is num%9 (remainder)
*/