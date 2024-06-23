#include<stdio.h>
int main(){
    int c=5,no=1000;
    do{
        no /=c;
    }while(c--);
    //--c; try
    //c!=0; try

    printf("%d\n",no);
    return 0;
}
/*
    c  no   
    5  1000  
    4  200  
    3  50
    2  16
    1  8
    0  8
    end error
*/