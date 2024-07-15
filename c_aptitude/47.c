#include <stdio.h>

int main(){
    int a,b=1;
    int x[5]={1,2,3,4,5};
    a=5*4+x[--b]-(9/b);
    printf("Result: %d\n",a);
}
/*NOTES
   [] and () both parenthesis has equal precedence, so its order of execution is left to rightt
*/