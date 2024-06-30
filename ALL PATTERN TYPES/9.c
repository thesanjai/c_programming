#include <stdio.h>

int main() {
    int rows=6;
    //printf("Enter the number of rows: ");
    //scanf("%d", &rows);

    /*
        
    for(int i = 0; i < rows; i++) {
        for(int j=i;j<rows;j++){
            printf(" ");
        }
        int number = 1;
        for(int j = 0; j <= i; j++) {
            printf("%d ", number);
            number = number * (i - j) / (j + 1);
        }
        printf("\n");
    }
    THIS CODE ALSO CORRECT
    */
    int matrix[rows][rows];
    for(int i = 0; i < rows; i++) {
        for(int j=i;j<rows;j++){
            printf(" ");
        }
        for(int j=0;j<=i;j++){
            if(j==0 || j==i){
                printf("1 ");
                matrix[i][j]=1;
            }else{
                printf("%d ", matrix[i-1][j] + matrix[i-1][j-1]);
                matrix[i][j]= matrix[i-1][j] + matrix[i-1][j-1];
            }
        }
        printf("\n");
    }
    /*  IGNORE PRINTING THE MATRIX
    
        printf("\n\n");

        for(int i=0;i<rows;i++){
            for(int j=0;j<rows;j++){
                printf("%d ", matrix[i][j]);
            }
            printf("\n");
        }   
    */
    
    return 0;
}
