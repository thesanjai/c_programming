#include <stdio.h>
#include <math.h>

/*int main(){
    int i,j=3;
    float k=7;

    i = k % j;
    printf("The remainder is: %d\n", i);
}*/

int main(){
    int i,j=3;
    float k=7;

    i =fmod(k,j);
    printf("The remainder is: %d\n", i);
}

/*NOTES
    
     '%'  operator is designed for int
     if we try use it with float, it ends up with

     so, if we want modulo for int and float , we should use fmod function in math.h 
*/