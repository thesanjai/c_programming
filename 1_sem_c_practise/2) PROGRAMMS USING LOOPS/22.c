//Factors of a numbers
#include<stdio.h>

int main(){
    int n;
    printf("Enter the n: ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        if(n%i==0){
            printf("%d ",i);
        }
    }
    return 0;
}