#include <stdio.h>

int main(){

    int a, b=10;

    a= -b--;

    printf("a=%d\nb=%d\n",a,b);
    return 0;
}