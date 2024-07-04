#include <stdio.h>

int main(){
    int i;

    i=(printf("code "),printf("sanjai "));

    printf("i=%d\n",i);
    return 0;
}
/*NOTE 
    ',' Operator evaluates -> LEFT to RIGHT
    and return the the left most value
*/