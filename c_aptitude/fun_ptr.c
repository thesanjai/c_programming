#include <stdio.h>

int add(int a,int b){
    return a+b;
}
int mul(int a,int b){
    return a*b;
}
int main(){

    int (*fun)(int ,int);
    fun=&add;
    printf("Addition: %d\n",fun(5,3));

    fun=&mul;
    printf("Multiplication: %d\n",fun(5,3));
    return 0;
}