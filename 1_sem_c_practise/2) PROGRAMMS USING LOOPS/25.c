//Count the number of digit in an integer
#include<stdio.h>

int main(){
    int n,count=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    int copy=n;
    while(n!=0){
        n=n/10;
        count++;
    }
    printf("The number of digits in %d is %d\n",copy,count);
    return 0;
}