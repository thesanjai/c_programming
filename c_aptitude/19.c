#include<stdio.h>

int func(int i){
    if(i%2){ //odd
        return (i++);
    }else{ //even
        return func(func(i-1));
    }
}
int main(){

    //int i=11;
    int i=10;
    printf("%d\n",func(i));
    
    return 0;
}