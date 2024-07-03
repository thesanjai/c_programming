#include <stdio.h>

#define R 10
#define C 20

int main(){

    int (*p)[R][C]; // try (p) also

    printf("%ld\n",sizeof(*p));

    return 0;
}