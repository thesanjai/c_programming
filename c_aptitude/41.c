#include <stdio.h>

int main(){
    int x=10, *y, **z;

    y = &x;
    z = &y;
    printf("x = %d\n", x);
    printf("*y = %d\n", *y);
    printf("**z = %d\n", **z);
    printf("*(*z) = %d\n", *(*z));

    printf("\n");
    printf("&x = %p\n",&x);
    printf("y = %p\n",y);
    printf("*z = %p\n",*z);
    
    return 0;
}