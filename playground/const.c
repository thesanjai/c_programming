#include <stdio.h>

int main(){
    const int a=10;

    int *p=(int*)&a;

    *p=20;
    printf("value of *p = %d\n",*p);

    printf("value of a = %d \n",a);
    return 0;
}