#include<stdio.h>

int main(){
    char arr[]={'a','b'};
    char *ptr=arr;

   
    if(&ptr==&arr){ //try ptr
        printf("same\n");
    }else{
        printf("not same\n");
    }
    return 0;
}