#include<stdio.h>

int main(){

    int a=10;
    int *p=&a; // pointer p is pointing to variable a

    printf("*p %d\n",*p);
    printf("&p %ld\n",&p);
    printf("p %ld\n",p);

    printf("\n\n");
    printf("a %d\n",a);
    printf("&a %ld",&a);
    return 0;
}