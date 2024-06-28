//Factorial without using function
#include<stdio.h>

int main(){
    int n;
    printf("Enter the n: ");
    scanf("%d",&n); //4

    int fact=1;

    for(int i=1;i<=n;i++){
        fact=fact*i; //fact=>1 2 6 24
    }

    printf("Factorial of %d is %d \n",n,fact);

    return 0;
}