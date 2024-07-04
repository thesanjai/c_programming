//Prime numbers between two ranges
#include<stdio.h>
#include<stdbool.h>

int main(){
    int n,m;
    printf("Enter the range: ");
    scanf("%d%d",&n,&m);

   
    for(int i=n+1;i<=m;i++){
        bool prime=true;
        for(int j=2;j*j<=i;j++){
            if(i%j==0){
                prime=false;
                break;
            }
        }
        if(prime){
            printf("%d ",i);
        }
    }
    return 0;
}