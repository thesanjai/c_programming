//Table of N and square of N
#include<stdio.h>

int main(){
    int n;
    printf("Enter the n: ");
    scanf("%d",&n);
    printf("NUMBER <<->> SQUARE\n");
    for(int i=0;i<=n;i++){
        printf("%d <<<<<->>>>> %d\n",i,i*i);
    }
    
    return 0;
}