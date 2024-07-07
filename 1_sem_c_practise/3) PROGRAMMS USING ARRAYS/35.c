//Fibonacci using array
#include <stdio.h>

int main(){

    int first,second;
    printf("Enter the first & second number: ");
    scanf("%d%d",&first,&second);

    int n;
    printf("Enter the number of terms: ");
    scanf("%d",&n);

    int fibo[n+2];
    fibo[0]=first; 
    fibo[1]=second;

    for(int i=2;i<=n;i++)
        i[fibo] = (i-2)[fibo] + (i-1)[fibo];

    for(int i=0;i<=n;i++)
        printf("%d ",i[fibo]);

    return 0;
}