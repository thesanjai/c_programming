//Positive negative checking 
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("%d is %s",n,n>0?"positive number":"negative number");
    return 0;
}
