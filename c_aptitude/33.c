#include <stdio.h>

union test{
    int a,b;
    char arr[8];
}u;
struct TEST{
    int a,b;
    char arr[8];
}s;

int main(){

    printf("sizeof union = %ld\n",sizeof(u));
    printf("sizeof struct = %ld\n",sizeof(s));
   
    return 0;
}
