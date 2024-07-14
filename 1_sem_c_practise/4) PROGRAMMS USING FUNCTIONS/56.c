//Factorial using recursive function

#include <stdio.h>

int fact(int n){
    if(n==0){
        return 1;
    }
    return n * fact(n-1);
}
int main(){
    int n;
    printf("Enter the n: ");
    scanf("%d",&n);

    printf("Factorial of %d is %d\n",n,fact(n));
}