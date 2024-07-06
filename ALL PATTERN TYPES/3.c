#include<stdio.h>

int main(){
    int n=5;

    //printf("Enter the value of n: ");
    //scanf("%d",&n);

    char temp='A';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%c ",temp);
        }
        temp++;
        putchar('\n');
    }
    return 0;
}