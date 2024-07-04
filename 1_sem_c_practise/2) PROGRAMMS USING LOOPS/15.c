//Sum of natural numbers
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the n: ");
    scanf("%d",&n);

   // printf("Sum of %d natural number is %d \n",n,(n*(n+1))/2);
   int sum=0;
   for(int i=1;i<=n;i++){
    sum=sum+i;
   }
   printf("Sum of %d natural number is %d \n",n,sum);
    return 0;
}