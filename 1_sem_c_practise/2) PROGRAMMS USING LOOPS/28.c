// Digit summation 
//Reverse the digits of given number
#include <stdio.h>

int main(){

    int n;
    printf("Enter the n: ");
    scanf("%d",&n);
    int copy=n;

    int sum=0;
    while(n!=0){
        sum =sum + n%10;
        n /=10;
    }

    printf("sum of %d is -> %d\n",copy,sum);
    return 0;
}