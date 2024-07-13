#include <stdio.h>
#include <stdlib.h>
#include <math.h> 
#include <stdbool.h>

//variables

typedef struct matrix{
    char name[20];
    int row;
    int col;
    double **a; //matrix element
}matrix;

static int matrix_name=0;

//function prototypes

void create_matrix(matrix *mat); //used for matrix creation
matrix* add_matrix(matrix mat1, matrix mat2); // used for addition of two matrices
matrix* sub_matrix(matrix mat1, matrix mat2); // used for subtraction of two matrices
matrix* mul_matrix(matrix mat1, matrix mat2); // used for multiplication of two matrices
matrix* trans_matrix(matrix mat); // used for transpose of a matrix
void print_matrix(matrix mat); // used for printing the info of the marix
int find_length_int(int a); //used for calulating width of int part, to use in printf statement
int find_decimal_part(double a); // used to find the decimal part of the double
void free_matrix_memory(matrix *mat); // used to release the dynamically allocated memory
bool is_symmetric(matrix mat); // used for checking matrix is symmetric
bool is_skew_symmetric(matrix mat); // used for checking matrix is skew-symmetric
bool is_identity(matrix mat); // used for checking matrix is identity
bool is_diagonal(matrix mat); // used for checking matrix is diagonal
bool is_upper_triangular(matrix mat); // used for checking matrix is upper triangular
bool is_lower_triangular(matrix mat); // used for checking matrix is lower triangular 



//functions


void create_matrix(matrix *mat){
    
    while(1){
        printf("Enter the name of the matrix %d : ",++matrix_name);
        if(scanf(" %19[^\n]s",mat->name) != 0 ){// 19 to avoid overflow
            break;
        }else{
            printf("Invalid name\n");
            printf("Try again.....\n");
         }
    }
    
    while(1){
        printf("Enter the number of rows : ");
        if(  scanf(" %d",&mat->row) !=0){
            break;
        }else{
            printf("Invalid number of rows\n");
            printf("Try again.....\n");
        }
    }
    while(1){
        printf("Enter the number of columns : ");
        if(  scanf(" %d",&mat->col) !=0){
            break;
        }else{
            printf("Invalid number of columns\n");
            printf("Try again.....\n");
        }
    }
   

    //creating dynamic memory for matrix
    
    //creating dynamic row
    mat->a=(double**)malloc(mat->row * sizeof(double*));

    if(mat->a == NULL){ // Check for memory allocation error
        printf("Memory allocation failed\n");
        return;
    }

    //cerating columns in dynamic rows
    for(int i=0;i<mat->row;i++){
        mat->a[i]=(double*)malloc(mat->col * sizeof(double));

        if(mat->a[i] == NULL){ // Check for memory allocation error
            printf("Memory allocation failed\n");
            return;
        }
    }

    //DATA ENTRY
    printf("Enter the elements of the matrix %s : \n",mat->name);

    for(int i=0;i<mat->row;i++){
        for(int j=0;j<mat->col;j++){
          while(1){
                printf("%s[%d][%d]? => ",mat->name,i,j);
                if(scanf(" %lf",&mat->a[i][j]) != 0){
                    break; //beraking while
                }else{
                    printf("Invalid number\n");
                    printf("try again.....\n");
                }
          }
        }
    }
    printf("Matrix \" %s \" is created sucessfully.....!\n\n",mat->name);
}

int find_length_int(int a){
    int len=0;
    while(a!=0){
        a=a/10;
        len++;
    }
    return len;
}
int find_decimal_part(double a) {
    double fractional_part = a - (int)a; // getting the value after the decimal
    int fractional_data = (int)(fractional_part * 1000000); // max length of decimal in double 6

     // Removing trailing zeros
    while (fractional_data != 0 && fractional_data % 10 == 0) {
        fractional_data /= 10;
    }

    if(fractional_data >= 9999){
        fractional_data /= 10000;
        fractional_data = fractional_data +1;
    }
     // Removing trailing zeros
    while (fractional_data != 0 && fractional_data % 10 == 0) {
        fractional_data /= 10;
    }

    return fractional_data;
}

void print_matrix(matrix mat){
    printf("\n");
    printf("The matrix \"%s\" is : \n",mat.name);
    printf("Diemension of the matrix is ( %d x %d )\n",mat.row,mat.col);

    //code for calulating max width of the matrix element
    int len_int = -9999999;
    int len_deci = -9999999;
    bool is_negative = false;
    for(int i=0;i<mat.row;i++){
        for(int j=0;j<mat.col;j++){
            //calculating max length of int part
            int temp_int = find_length_int(mat.a[i][j]); 
            len_int = temp_int > len_int ? temp_int : len_int;

            //calculating max length of decimal part                                // abs returns int value it was in stdlib.h
            int temp_deci = find_length_int(find_decimal_part(fabs(mat.a[i][j]))); // fabs retuns double value it was in math.h
            len_deci = temp_deci > len_deci ? temp_deci : len_deci;

            //checking for negative numbers
            if(mat.a[i][j] < 0){
                is_negative = true;
            }
        }
    }

    //int width_int = len_int + 3; // two digit width starts from 5
    // if two digit , width = 5 ;if three digit widht =6
    
    if(is_negative == true){
        len_int++; // if negative then add one extra space
    }


    printf("\n");
    for(int i=0;i<mat.row;i++){
        for(int j=0;j<mat.col;j++){
            printf("%0*.*f  ",len_int,len_deci,mat.a[i][j]); // 2-> 2 decimal points
        }
        printf("\n");
    }
    printf("\n");
}

matrix* add_matrix(matrix mat1, matrix mat2){
   
    if(mat1.row != mat2.row || mat1.col != mat2.col ){
        printf("Diemension error......\n");
        printf("Cannot perform addition operation\n");
        return NULL;
    }

    matrix *mat3 = (matrix*)malloc(sizeof(matrix)); //creating memory for matrix 3

    //checking for memory allocation
    if(mat3 == NULL){
        printf("Memory allocation falied\n");
        return NULL;
    }
    //allocating values for matrix 3
    while(1){
        printf("Enter the name of the resultant matrix(addition) : ");
        if(scanf(" %19[^\n]s",mat3->name) !=0){
            break;
        }else{
            printf("Invalid name\n");
            printf("try again.....\n");
         }
    }
   
    mat3->row=mat1.row;
    mat3->col=mat1.col;

    //creating memory for storing element in matrix 3

    mat3->a = (double**) malloc(mat3->row * sizeof(double*));

    if(mat3->a == NULL){
        printf("ERROR IN MEMORY ALLOCATION\n");
        return NULL;
    }

    for(int i=0;i<mat3->row;i++){
        mat3->a[i] = (double*) malloc(mat3->col * sizeof(double));
        if(mat3->a[i] == NULL){
            printf("ERROR IN MEMORY ALLOCATION\n");
            return NULL;
        }
    }

    // adding matrix1 and matrix2 and store it matrix3
    for(int i=0;i<mat3->row;i++){
        for(int j=0;j<mat3->col;j++){
            mat3->a[i][j] = mat1.a[i][j] + mat2.a[i][j];
        }
    }
    
    printf("\nMatrix \" %s \" and Matrix \" %s \" is added sucessfully.....!\n\n",mat1.name,mat2.name);
    return mat3;
}

matrix* sub_matrix(matrix mat1, matrix mat2){

    if(mat1.row != mat2.row || mat1.col != mat2.col ){
        printf("Diemension error......\n");
        printf("Cannot perform subtraction operation\n");
        return NULL;
    }


    matrix *mat3 = (matrix*)malloc(sizeof(matrix)); //creating memory for matrix 3

    //checking for memory allocation
    if(mat3 == NULL){
        printf("Memory allocation falied\n");
        return NULL;
    }

    //allocating values for matrix 3
    while(1){
            printf("Enter the name of the resultant matrix(subtraction) : ");
            if(scanf(" %19[^\n]s",mat3->name) !=0){
                break;
            }else{
                printf("Invalid name\n");
                printf("Try again.....\n");
            }
        }

    mat3->row=mat1.row;
    mat3->col=mat1.col;

    //creating memory for storing element in matrix 3

    mat3->a = (double**) malloc(mat3->row * sizeof(double*));

    if(mat3->a == NULL){
        printf("ERROR IN MEMORY ALLOCATION\n");
        return NULL;
    }

    for(int i=0;i<mat3->row;i++){
        mat3->a[i] = (double*) malloc(mat3->col * sizeof(double));
        if(mat3->a[i] == NULL){
            printf("ERROR IN MEMORY ALLOCATION\n");
            return NULL;
        }
    }

    // subtracting matrix1 and matrix2 and store it matrix3
    for(int i=0;i<mat3->row;i++){
        for(int j=0;j<mat3->col;j++){
            mat3->a[i][j] = mat1.a[i][j] - mat2.a[i][j];
        }
    }

    printf("\nMatrix \" %s \" and Matrix \" %s \" is subtracted sucessfully.....!\n\n",mat1.name,mat2.name);
    return mat3;
}

matrix* mul_matrix(matrix mat1, matrix mat2){


     if( mat1.col != mat2.row ){
        printf("Diemension error......\n");
        printf("Cannot perform multiplication operation\n");
        return NULL;
    }

    matrix *mat3 = (matrix*)malloc(sizeof(matrix)); //creating memory for matrix 3

    //checking for memory allocation
    if(mat3 == NULL){
        printf("Memory allocation falied\n");
        return NULL;
    }

    //allocating values for matrix 3
     while(1){
        printf("Enter the name of the resultant matrix(multiplication) : ");
        if(scanf(" %19[^\n]s",mat3->name) != 0){
            break;
        }else{
            printf("Invalid name\n");
            printf("Try again.....\n");
         }
    }

    mat3->row=mat1.row;
    mat3->col=mat2.col;

    //creating memory for storing element in matrix 3

    mat3->a = (double**) malloc(mat3->row * sizeof(double*));

    if(mat3->a == NULL){
        printf("ERROR IN MEMORY ALLOCATION\n");
        return NULL;
    }

    for(int i=0;i<mat3->row;i++){
        mat3->a[i] = (double*) malloc(mat3->col * sizeof(double));
        if(mat3->a[i] == NULL){
            printf("ERROR IN MEMORY ALLOCATION\n");
            return NULL;
        }
    }

    // multiplying matrix1 and matrix2 and store it matrix3
    for(int i=0;i<mat1.row;i++){
        for(int j=0;j<mat2.col;j++){
           mat3->a[i][j] = 0;
           for(int k=0;k<mat1.col;k++){
                mat3->a[i][j] += mat1.a[i][k] * mat2.a[k][j];
           }
        }
    }
    printf("\nMatrix \" %s \" and Matrix \" %s \" is multiplied sucessfully.....!\n\n",mat1.name,mat2.name);
    return mat3;
  
}

matrix* trans_matrix(matrix mat){
    matrix *mat3 = (matrix*)malloc(sizeof(matrix)); //creating memory for matrix 3

    //checking for memory allocation
    if(mat3 == NULL){
        printf("Memory allocation falied\n");
        return NULL;
    }

    //allocating values for matrix 3
     while(1){
         printf("Enter the name of the resultant matrix(transpose) : ");
         if( scanf(" %19[^\n]s",mat3->name) != 0){
            break;
         }else{
            printf("Invalid name\n");
            printf("Try again....\n");
         }
     }
       
           
    //diemensions are interchanged
    mat3->row=mat.col;
    mat3->col=mat.row;

    //creating memory for storing element in matrix 3
    mat3->a = (double**) malloc(mat3->row * sizeof(double*));

    if(mat3->a == NULL){
        printf("ERROR IN MEMORY ALLOCATION\n");
        return NULL;
    }

    for(int i=0;i<mat3->row;i++){
        mat3->a[i] = (double*) malloc(mat3->col * sizeof(double));
        if(mat3->a[i] == NULL){
            printf("ERROR IN MEMORY ALLOCATION\n");
            return NULL;
        }
    }

    for(int i=0;i<mat3->row;i++){
        for(int j=0;j<mat3->col;j++){
            mat3->a[i][j] = mat.a[j][i];
        }
    }
    
    printf("\nMatrix \" %s \" is transposed sucessfully.....!\n\n",mat.name);
    return mat3;
}


void free_matrix_memory(matrix *mat){
    for(int i=0;i<mat->row;i++){
        free(mat->a[i]);
    }
    free(mat->a);

    printf("Matrix \" %s\'s \" memory is released successfully......!\n",mat->name);
}

inline bool is_symmetric(matrix mat)
{
    for(int i=0; i<mat.row; i++){
        for(int j=0; j<mat.col; j++){
            if(mat.a[i][j] != mat.a[j][i]){
                return false;
            }
        }
    }
    return true;
}

inline bool is_skew_symmetric(matrix mat)
{
    for(int i=0; i<mat.row; i++){
        for(int j=0; j<mat.col; j++){
            if(mat.a[i][j] != -mat.a[j][i]){
                return false;
            }
        }
    }
    return true;
}

inline bool is_identity(matrix mat)
{   
    for(int i=0; i<mat.row; i++){
        for(int j=0; j<mat.col; j++){
            if(i==j && mat.a[i][j] != 1){
                return false;
            }else if(i!=j && mat.a[i][j] != 0){
                return false;
            }
        }
    }
    return true;
}

inline bool is_diagonal(matrix mat)
{
    for(int i=0; i<mat.row; i++){
        for(int j=0; j<mat.col; j++){
            if(i!=j && mat.a[i][j]!= 0){
                return false;
            }
        }
    }
    return true;
}

inline bool is_upper_triangular(matrix mat)
{
    for(int i=0; i<mat.row; i++){
        for(int j=0; j<mat.col; j++){
            if(i>j && mat.a[i][j]!= 0){
                return false;
            }
        }
    }
    return true;
}

inline bool is_lower_triangular(matrix mat)
{   
    for(int i=0; i<mat.row; i++){
        for(int j=0; j<mat.col; j++){
            if(i<j && mat.a[i][j]!= 0){
                return false;
            }
        }
    }
    return true;
}
