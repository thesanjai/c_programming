#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int a=rand()%1000;

  
    printf("a=%d\n",a);

    return 0;
}
