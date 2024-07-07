//Amstrong checking 
#include <stdio.h>
#include <math.h> //while compiling add the -lm flag
int main(){
    int n;
    printf("Enter the n: "),scanf("%d",&n);
    int copy=n;

    int count=0;
    while(n!=0) count++,n /=10;
    n=copy;

    int sum=0;
    while(n!=0) {int temp=n%10; sum=sum+pow(temp,count),n /=10;}

    sum==copy?printf("%d is amstrong number\n",copy):printf("%d is NOT a amstrong number\n",copy);
    return 0;
}