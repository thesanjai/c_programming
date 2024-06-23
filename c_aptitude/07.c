/*#include<stdio.h>

int main(){
    int i;
    i=1,2,3;
    printf("i=%d\n",i);

    return 0;
}
*/
/* 
    NOTES FOR ABOVE PROBLEM:
        OPERATOR PRECEDENCE '=' HAS HIGHER PRECENDECE
        i=1,2,3; // (i=1),2,3;
        so,output i=1;
*/
///////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

int main(){
    int i;
    i=(1,2,3);
    printf("i=%d\n",i);

    return 0;
}
/*
    NOTES:
        IF WE ENCLOSE THE ELEMENTS IN THE PARANTHESIS, THEN THE LAST ELEMENT WILL ASSIGN TO THE VARIABLE
        SO, OUTPUT =3
*/