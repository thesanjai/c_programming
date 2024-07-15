// Factorial using function
#include <stdio.h>

long int fact(int n){
    if(n==0) return 1;
    int fact =1;
    for(int i=1;i<=n;i++)
        fact = fact * i;
    
    return fact;
}
int main(){
    int n;
    printf("Enter the n: ");
    scanf("%d", &n);
    printf("Factorial of %d is %ld\n",n,fact(n));

    return 0;
}