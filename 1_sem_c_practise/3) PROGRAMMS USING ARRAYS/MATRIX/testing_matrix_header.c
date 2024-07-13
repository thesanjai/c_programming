#include "matrix_h.h"


int main(){

    matrix a,b;

    create_matrix(&a);
    create_matrix(&b);

    matrix *result = add_matrix(a,b);

    matrix *result1 = sub_matrix(a,b);
                            
    matrix *result2 = mul_matrix(a,b);

    matrix *result3 = trans_matrix(a);

    print_matrix(a);
    print_matrix(b);

    if(result == NULL){
        printf("Error ....ADDITION OPEARTION NOT PERFORMED\n");
    }else{
        print_matrix(*result);
        free_matrix_memory(result);
    }

    if(result1 == NULL){
        printf("Error ....SUBTRACTION OPEARTION NOT PERFORMED\n");
    }else{
        print_matrix(*result1);
        free_matrix_memory(result1);
    }

    if(result2 == NULL){
        printf("Error ....MULTIPLICATION OPERATION NOT PERFORMED\n");
    }else{
        print_matrix(*result2);
        free_matrix_memory(result2);
    }

     if(result3 == NULL){
        printf("Error ....TRANSPOSE OPERATION NOT PERFORMED\n");
    }else{
        print_matrix(*result3);
        free_matrix_memory(result3);
    }



   free_matrix_memory(&a);
    free_matrix_memory(&b);
    /*
    free_matrix_memory(result);
    free_matrix_memory(result1);
    free_matrix_memory(result1);
    free_matrix_memory(result3);*/

    matrix a1,a2,a3,a4,a5,a6;

    create_matrix(&a1);
    create_matrix(&a2);
    create_matrix(&a3);
    create_matrix(&a4);
    create_matrix(&a5);
    create_matrix(&a6);

    if(is_symmetric(a1)){
        printf("Matrix \"%s\" is symmetric\n",a1.name);
    }else if(is_skew_symmetric(a2)){
        printf("Matrix \"%s\" is skew symmetric\n",a2.name);
    }else if(is_diagonal(a3)){
        printf("Matrix \"%s\" is diagonal\n",a3.name);
    }else if(is_identity(a4)){
        printf("Matirx \"%s\" is identity\n",a4.name);
    }else if(is_lower_triangular(a5)){
        printf("Matrix \"%s\" is lower triangular\n",a5.name);
    }else if(is_upper_triangular(a6)){
        printf("Matrix \"%s\" is upper triangular\n",a6.name);
    }
    return 0;
}