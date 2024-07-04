//Prime factors
//The factors, should be a prime number
#include<stdio.h>

int main(){
    int n;
    printf("Enter a n : ");
    scanf("%d",&n);                         
                  //40 => 2 2 2 5
    for(int i=2;i<=n;i++){ //i=> 2            3 4 5
        while(n%i==0){  // 40%2  20%2 10%2     5%5                                                
            printf("%d ",i); //2 2  2          5
            n= n/i;         //20 10 5          0
        }
    }
    return 0;
}