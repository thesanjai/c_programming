#include<stdio.h>

int main(){
    int n=5;

    //printf("Enter the value of n: ");
    //scanf("%d",&n);

    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            printf("* ");
        }
        putchar('\n');
    }
    return 0;
}