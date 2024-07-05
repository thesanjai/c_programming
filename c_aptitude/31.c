#include <stdio.h>

int main(){
    int a=0;
    a= (a++) + (a++) - (a++) + (++a);

    printf("a=%d\n",a);
    return 0;
}
