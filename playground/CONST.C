#include <stdio.h>

int main(){
    const int a=10;
    int *p=(int*)&a;
    *p=20;
    printf("a=%d",a);
}