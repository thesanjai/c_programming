//without using modulo % operator find the given number is odd or even

#include <stdio.h>

int main(){
    int n;
    printf("Enter the n: ");
    scanf("%d",&n);
    n&1 ? printf("odd number\n"):printf("Even number\n");
    return 0;
}
/*NOTES
The bitwise AND operator (&) compares each bit of the first operand to the corresponding bit of the second
always last digit of every odd number is 1
and 
always last digit of every even number is 0
so, if use bitwise & 1 with, it returns 1 if it is odd else 0 if it is even
*/