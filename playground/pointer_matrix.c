#include<stdio.h>

int* display(int* a,int row,int col ){
      
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d ",*(a+i*col+j));
        }
        printf("\n");
    }

    return (a);
}

int main(){
    
    int a[][4]={   //we must give col size 
                {1,2,3,4},
                {5,6,7,8}, 
                {9,10,11,12}
                };
    int row=sizeof(a)/sizeof(a[0]);
    int col=sizeof(a[0])/sizeof(a[0][0]);


    int* b=display(&a[0][0],row,col);

       
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d ",*(b+i*col+j));
        }
        printf("\n");
    }
   
  

    return 0;
}