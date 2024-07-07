#include <stdio.h>
#include <stdlib.h>


typedef struct matrix{
    char name;
    int row;
    int col;
    int **a; //matrix element
}matrix;


void create_matrix(matrix *mat);
matrix* add_matrix(matrix *mat1, matrix *mat2);
matrix* sub_matrix(matrix *mat1, matrix *mat2);
matrix* mul_matrix(matrix *mat1, matrix *mat2);
matrix* trans_matrix(matrix* mat);
void print_matrix(matrix mat);
void free_matrix_memory(matrix *mat);



    


void create_matrix(matrix *mat){
    printf("Enter the name of the matrix(single char): ");
    scanf(" %c",&mat->name);

    printf("Enter the number of rows: ");
    scanf("%d",&mat->row);
    printf("Enter the number of columns: ");
    scanf("%d",&mat->col);

    //creating dynamic memory for matrix
    
    //creating dynamic row
    mat->a=(int**)malloc(mat->row * sizeof(int*));

    if(mat->a == NULL){ // Check for memory allocation error
        printf("Memory allocation failed\n");
        return;
    }

    //cerating columns in dynamic rows
    for(int i=0;i<mat->row;i++){
        mat->a[i]=(int*)malloc(mat->col * sizeof(int));

        if(mat->a[i] == NULL){ // Check for memory allocation error
            printf("Memory allocation failed\n");
            return;
        }
    }

    //DATA ENTRY
    printf("Enter the elements of the matrix %c : \n",mat->name);

    for(int i=0;i<mat->row;i++){
        for(int j=0;j<mat->col;j++){
            printf("%c[%d][%d]? => ",mat->name,i,j);
            scanf("%d",&mat->a[i][j]);
        }
    }

}

void print_matrix(matrix mat){
    printf("\n");
    printf("The matrix %c is: \n",mat.name);
    for(int i=0;i<mat.row;i++){
        for(int j=0;j<mat.col;j++){
            printf("%d ",mat.a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

matrix* add_matrix(matrix *mat1, matrix *mat2){
    matrix *mat3 = (matrix*)malloc(sizeof(matrix)); //creating memory for matrix 3

    //checking for memory allocation
    if(mat3 == NULL){
        printf("Memory allocation falied\n");
        return NULL;
    }

    if(mat1->row != mat2->row || mat1->col != mat2->col ){
        printf("Diemension error......\n");
        printf("Cannot perform addition operation\n");
        return NULL;
    }

    //allocating values for matrix 3
    printf("Enter the name of the resultant matrix(single char): ");
    scanf(" %c",&mat3->name);

    mat3->row=mat1->row;
    mat3->col=mat1->col;

    //creating memory for storing element in matrix 3

    mat3->a = (int**) malloc(mat3->row * sizeof(int*));

    if(mat3->a == NULL){
        printf("ERROR IN MEMORY ALLOCATION\n");
        return NULL;
    }

    for(int i=0;i<mat3->row;i++){
        mat3->a[i] = (int*) malloc(mat3->col * sizeof(int));
        if(mat3->a[i] == NULL){
            printf("ERROR IN MEMORY ALLOCATION\n");
            return NULL;
        }
    }

    // adding matrix1 and matrix2 and store it matrix3
    for(int i=0;i<mat3->row;i++){
        for(int j=0;j<mat3->col;j++){
            mat3->a[i][j] = mat1->a[i][j] + mat2->a[i][j];
        }
    }

    return mat3;
}

matrix* sub_matrix(matrix *mat1, matrix *mat2){
    matrix *mat3 = (matrix*)malloc(sizeof(matrix)); //creating memory for matrix 3

    //checking for memory allocation
    if(mat3 == NULL){
        printf("Memory allocation falied\n");
        return NULL;
    }

    if(mat1->row != mat2->row || mat1->col != mat2->col ){
        printf("Diemension error......\n");
        printf("Cannot perform subtraction operation\n");
        return NULL;
    }

    //allocating values for matrix 3
    printf("Enter the name of the resultant matrix (single char): ");
    scanf(" %c",&mat3->name);

    mat3->row=mat1->row;
    mat3->col=mat1->col;

    //creating memory for storing element in matrix 3

    mat3->a = (int**) malloc(mat3->row * sizeof(int*));

    if(mat3->a == NULL){
        printf("ERROR IN MEMORY ALLOCATION\n");
        return NULL;
    }

    for(int i=0;i<mat3->row;i++){
        mat3->a[i] = (int*) malloc(mat3->col * sizeof(int));
        if(mat3->a[i] == NULL){
            printf("ERROR IN MEMORY ALLOCATION\n");
            return NULL;
        }
    }

    // subtracting matrix1 and matrix2 and store it matrix3
    for(int i=0;i<mat3->row;i++){
        for(int j=0;j<mat3->col;j++){
            mat3->a[i][j] = mat1->a[i][j] - mat2->a[i][j];
        }
    }

    return mat3;
}

matrix* mul_matrix(matrix *mat1, matrix *mat2){
    matrix *mat3 = (matrix*)malloc(sizeof(matrix)); //creating memory for matrix 3

    //checking for memory allocation
    if(mat3 == NULL){
        printf("Memory allocation falied\n");
        return NULL;
    }

    if( mat1->col != mat2->row ){
        printf("Diemension error......\n");
        printf("Cannot perform multiplication operation\n");
        return NULL;
    }

    //allocating values for matrix 3
    printf("Enter the name of the resultant matrix (single char): ");
    scanf(" %c",&mat3->name);

    mat3->row=mat1->row;
    mat3->col=mat2->col;

    //creating memory for storing element in matrix 3

    mat3->a = (int**) malloc(mat3->row * sizeof(int*));

    if(mat3->a == NULL){
        printf("ERROR IN MEMORY ALLOCATION\n");
        return NULL;
    }

    for(int i=0;i<mat3->row;i++){
        mat3->a[i] = (int*) malloc(mat3->col * sizeof(int));
        if(mat3->a[i] == NULL){
            printf("ERROR IN MEMORY ALLOCATION\n");
            return NULL;
        }
    }

    // multiplying matrix1 and matrix2 and store it matrix3
    for(int i=0;i<mat1->row;i++){
        for(int j=0;j<mat2->col;j++){
           mat3->a[i][j] = 0;
           for(int k=0;k<mat1->col;k++){
                mat3->a[i][j] += mat1->a[i][k] * mat2->a[k][i];
           }
        }
    }

    return mat3;
    
}

matrix* trans_matrix(matrix* mat){
    matrix *mat3 = (matrix*)malloc(sizeof(matrix)); //creating memory for matrix 3

    //checking for memory allocation
    if(mat3 == NULL){
        printf("Memory allocation falied\n");
        return NULL;
    }

    //allocating values for matrix 3
    printf("Enter the name of the resultant matrix (single char): ");
    scanf(" %c",&mat3->name);

    mat3->row=mat->row;
    mat3->col=mat->col;

    //creating memory for storing element in matrix 3

    mat3->a = (int**) malloc(mat3->row * sizeof(int*));

    if(mat3->a == NULL){
        printf("ERROR IN MEMORY ALLOCATION\n");
        return NULL;
    }

    for(int i=0;i<mat3->row;i++){
        mat3->a[i] = (int*) malloc(mat3->col * sizeof(int));
        if(mat3->a[i] == NULL){
            printf("ERROR IN MEMORY ALLOCATION\n");
            return NULL;
        }
    }

    for(int i=0;i<mat3->row;i++){
        for(int j=0;j<mat3->col;j++){
            mat3->a[i][j] = mat->a[j][i];
        }
    }

    return mat3;
}


void free_matrix_memory(matrix *mat){
    for(int i=0;i<mat->row;i++){
        free(mat->a[i]);
    }
    free(mat->a);
}