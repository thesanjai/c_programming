#include<stdio.h>

int main(){
    int n=5;

    //printf("Enter the value of n: ");
    //scanf("%d",&n);

    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            printf("* ");
        }
        putchar('\n');
    }
    return 0;
}