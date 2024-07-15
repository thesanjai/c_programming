//Sum of N numbers using recursion

#include <stdio.h>

int nsum(int n){
    if(n==1){
        return 1;
    }else{
        return n + nsum(n-1);
    }
}

int main(){
    int n;
    printf("Enter the n: ");
    scanf("%d",&n);

    printf("The sum of %d natural numbers is %d\n",n,nsum(n));
    return n;
}