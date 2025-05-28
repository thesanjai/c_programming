#include <stdio.h>
#include <stdlib.h>

int reverse(int i){
    if( i > 5){
        exit(0);
    }
    printf("%d ", i);
    return reverse(i++); // This line will cause infinite recursion because i++ will always return the current value of i before incrementing it.
    // return reverse(++i);
}
int main(){
    reverse(1);
}