#include <stdio.h>
#include <stdlib.h>

int reverse(int i){
    if( i > 5){
        exit(0);
    }
    printf("%d ", i);
    return reverse(i++);
    //return reverse(++i);
}
int main(){
    reverse(1);
}