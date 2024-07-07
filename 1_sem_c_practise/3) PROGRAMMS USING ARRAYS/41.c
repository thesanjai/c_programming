//Transpose of a matrix
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int n;
    printf("Enter the size of the matrix (n x n): ");
    scanf("%d", &n);
    int a[n][n];        
    
    printf("\nORIGINAL MATIX: \n");
    for(int i = 0; i < n; i++){
          for(int j=0;j<n;j++){
             i[j[a]]=rand()%10;
             printf("%d ",i[j[a]]);
          }
        printf("\n");
    }

    for(int i = 0; i < n; i++){
          for(int j=i+1;j<n;j++){
            i[j[a]] = i[j[a]] + j[i[a]] - (j[i[a]] = i[j[a]]);
           }
    }
    
    printf("\nTRANSPOSED MATRIX: \n");
     for(int i = 0; i < n; i++){
          for(int j=0;j<n;j++){
             printf("%d ",i[j[a]]);
          }
        printf("\n");
    }

    return 0;
}