#include<stdio.h>

int main(){
    int n=10;

    //printf("Enter the value of n: ");
    //scanf("%d",&n);

    int count=1;

    for(int i=1;i<=n;i++){

        if(i%2==0){
            continue;
        }
        for(int j=i;j<=n;j++){
            printf(" ");
        }

        int temp_count=count; 
        
        for(int j=1;j<=i;j++){
            
            int mid =i/2;

           if(j==i || j==n){
            printf("%d ",count);
           }else if(j <= mid ){
             printf("%d ",temp_count);
             temp_count++;
           }else if(j > mid){
             printf("%d ",temp_count);
             temp_count--;
           }
          
        }
        putchar('\n');
        count++;
    }
    
    return 0;
}