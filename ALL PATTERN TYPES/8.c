#include<stdio.h>

int main(){
    int n=5;

    //printf("Enter the value of n: ");
    //scanf("%d",&n);

    for(int i=0;i<=n;i++){
        
        for(int j=0;j<=i;j++){
            printf("  ");
        }

        for(int j=i;j<=n;j++){
            printf("* ");
        }
        for(int j=i;j<n;j++){
            printf("* ");
        }
        

        /*
            or
            
    for(int i=n;i>=0;i--){

        for(int j=i;j<=n;j++){
            printf(" ");
        }

        for(int j=0;j<=i;j++){
            printf("* ");
        }
        putchar('\n');
    }
        */


        putchar('\n');
    }

    
   
    return 0;
}