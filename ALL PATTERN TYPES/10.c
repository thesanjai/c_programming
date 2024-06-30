#include<stdio.h>

int main(){
    int n=4;

    //printf("Enter the value of n: ");
    //scanf("%d",&n);
    int count=1;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            printf("%d ",count++);
        }
        putchar('\n');
    }
    return 0;
}