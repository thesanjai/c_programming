#include <stdio.h>

int main(){
    int m,i=0,j=1,k=2;

    m= i++ || j++ || k++;

    printf("m=%d i=%d j=%d k=%d \n",m,i,j,k);

    i=0,j=5,k=1;
    m= i++ || j++ && k++;
    printf("m=%d i=%d j=%d k=%d \n",m,i,j,k);
    
    return 0;
}