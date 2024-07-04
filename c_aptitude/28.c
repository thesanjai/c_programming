#include <stdio.h>


int main(){
    int arr[2][2]={
                    {1,2},
                    {3,4}
                  };

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d ", j[i[arr]]); //try arr[i][j] = j[i[arr]]      arr[j][i] = i[j[arr]] 
        }
    }

    printf("\n\n");

    int arr2[2]={10,20};
    for(int i=0;i<2;i++){
        printf("%d ",i[arr2]);
    }

    printf("\n");
    
    return 0;
}
