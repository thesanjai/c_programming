//Multiplication table

#include<stdio.h>

int main(){
    int n;
    printf("Enter a n : ");
    scanf("%d",&n);

    int range;
    printf("Enter a range : ");
    scanf("%d",&range);

    for(long i=0;i<=range;i++){
        printf("%d * %ld = %ld",n,i,n*i);
        putchar('\n');
    }

    return 0;
}