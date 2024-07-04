//Fibonacci starting from any two numbers
#include<stdio.h>

int main(){
    int n;
    printf("Enter the count: ");
    scanf("%d",&n);

    int first,second,next;
    printf("Enter 2 numbers: ");
    scanf("%d %d",&first,&second);

    printf("%d %d ",first,second);
   
    for(int i=0;i<n-2;i++){
        next=first+second;
        printf("%d ",next);
        first=second;
        second=next;
    }
    

    return 0;
}