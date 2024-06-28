//Factorial without using function
#include<stdio.h>

int main(){
    int n;
    printf("Enter the n: ");
    scanf("%d",&n); //4

    int fact=1;
    int i=1;

    while(i<n){
        fact =fact*++i;
    }

    printf("Factorial of %d is %d \n",n,fact);

    return 0;
}