//Check the given number is odd or even  
#include <stdio.h>

int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    if(n%2==0){
        printf("%d is even",n);
        return 0;
    }else{
        printf("%d is odd",n);
        return 0;
    }
}