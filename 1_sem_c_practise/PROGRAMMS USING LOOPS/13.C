//Calculate x to the power y

#include<stdio.h>
//#include<math.h>

int main(){
    int x,y;
    printf("Enter the value of x and y: ");
    scanf("%d%d",&x,&y);
   // printf("x to the power y is: %.0f",pow(x,y));

    if(y<0){
        printf("Exponential value cannot be Negative\n");
        return 1;
    }else if(y==0){
        printf("%d power %d is: 1\n",x,y);
        return 0;
    }

    long long ans=1;

    for(int i=1;i<=y;i++){
        ans = ans*x;
    }

    printf("%d power %d is %lld",x,y,ans);

    return 0;
}