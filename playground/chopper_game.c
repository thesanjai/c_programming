#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


#define size 8

int main(){

    int a[8][8];

    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            a[i][j]=false;
        }
    }

    

    int chopper;
    printf("Enter the no. of choppers: ");
    scanf("%d",&chopper);

    int count=0;

    for(int k=0;k<chopper;k++){
        int x,y;
        printf("Enter the x and y coordinates: ");
        scanf("%d%d",&x,&y);

        x=x%8;
        y=y%8;
        for(int i=0;i<size;i++){
            for(int j=0;j<size;j++){
              
              if(!a[x][j]){
                a[x][j]=true;
                count++;
              }
              if(!a[j][y]){
                a[j][y]=true;
                count++;
              }
            }
        }
        printf("\n After resqueing\n");
        for(int i=0;i<size;i++){
            for(int j=0;j<size;j++){
                printf("%d\t",a[i][j]);
            }
            printf("\n");
        }
        printf("%d\n",count);

    }
    

    printf("No. of hostages resqued if %d ",count);
    return 0;
}