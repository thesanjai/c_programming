#include <stdio.h>

int main(){
    register int i;
    printf("Enter i: ");
    scanf("%d",&i);

    printf("i = %d\n",i);

    return 0;
}
/* NOTES
        normal integer variables stores the value in the memory (RAM), 
        for storing the value in the variable, we use the address of the RAM , by using '&' operator in scanf

        register variable => store in cpu register instead of memory
        so, storing values in the register varible , we should provide the address of the register
        so, answer is compilation error

*/