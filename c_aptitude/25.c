#include <stdio.h>

int main(){
    int i,j;

    i=(printf("code "),printf("sanjai "));

    printf("i=%d\n",i);

    j = printf("code "),printf("sanjai ");
    printf("j=%d\n",j);
    return 0;
}
/*NOTE 
    ',' Operator evaluates -> LEFT to RIGHT
    and return the the left most value
*/