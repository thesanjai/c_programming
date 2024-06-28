#include<stdio.h>

int main(){
    int n;
    printf("Enter the n : ");
    scanf("%d", &n);

    int sum=0;
    int mul=1;

    while(n!=0){
        int temp=n%10;
        sum +=temp;
        mul *=temp;

        n /=10;
    }
    if(sum==0){
        printf("cannot able to divide\n");
        return 0;
    }

    printf("sum = %d\n", sum);
    printf("mul = %d\n", mul);
    printf("%d/%d is %f\n",mul,sum,(float)mul/sum);
        
    return 0;
}
