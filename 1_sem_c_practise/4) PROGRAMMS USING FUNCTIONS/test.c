#include <stdio.h>

int main(){
    int n;
    printf("Enter the n: ");
    scanf("%d",&n);

    int ans=0;
    while(n != 0){
        ans = ans *10 +n%10;
        n = n/10;
    }

    printf("Reversed number: %d\n",ans);
}