#include<stdio.h>
#include<stdlib.h>

int main(){
    char arr[]={'a','b'};
    char *p=arr;

   
    if(&p == &arr){ //try p
        printf("same\n");
    }else{
        printf("not same\n");
    }
    return 0;
}