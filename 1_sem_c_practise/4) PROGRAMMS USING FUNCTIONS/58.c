//Find the nth Number in Fibonacci series


#include <stdio.h>

int fibo(int n){
    if(n <=1){
        return n;
    }else{
        return fibo(n-1) + fibo(n-2);
    }
}
int main(){
    int n;
    printf("Enter the n: ");
    scanf("%d",&n);
    
    printf("Fibo of %d is %d\n",n,fibo(n));
    printf("\n");
    return 0;
}