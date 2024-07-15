// Fibonacci using recursive function

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
    for(int i=0;i<=n;i++){
        printf("%d ",fibo(i));
    }
    printf("\n");
    return 0;
}