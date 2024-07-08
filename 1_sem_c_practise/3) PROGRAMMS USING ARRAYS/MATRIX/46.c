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
    return 0;
}