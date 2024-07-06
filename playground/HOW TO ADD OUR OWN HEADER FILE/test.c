#include<stdio.h>
#include<stdlib.h>
#include "test.h"


int main(int argc,char** argv){

    
    Sparse_Matrix A;

    char c;
    printf("Do you want to create your own matrix?(y/n): ");
    //c=getchar(); dont use getchar it leads to  stack smashing , because The getchar() function reads a character from the standard input, but it does not consume the newline character (\n) that is entered after the character.  
    scanf("%c",&c);
    if(c=='y' || c=='Y'){
        Create_Sparse_Matrix(&A);
    }else if(c=='n' || c=='N'){
        Create_Sparse_Matrix_from_file(&A);
    }else{
        printf("Invalid Input\n");
        return 1;
    }
    
    display(A);
    return 0;
}