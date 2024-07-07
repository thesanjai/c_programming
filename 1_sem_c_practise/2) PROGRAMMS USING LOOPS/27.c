//PALINDROME CHECKING

#include <stdio.h>

int main(){

    int n;
    printf("Enter the n: ");
    scanf("%d",&n);
    int copy=n;

    int ans=0;
    while(n!=0){
        ans =ans*10+(n%10);
        n /=10;
    }

    ans==copy?printf("%d is palindrome\n",copy):printf("%d is NOT a palindrome\n",copy);

    return 0;
}