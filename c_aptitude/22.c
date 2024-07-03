#include <stdio.h>

int main(){
    int a[]={1,2,3,4,5,6};
    int *ptr = (int*) (&a+1);
    printf("%d\n",*(ptr-1)); // *ptr -1 is different from *(ptr-1)
                            //actual size back to (-24)           just step back to prev position

    printf("%d\n",*ptr-1);
    printf("%d\n",*ptr-2);
    return 0;
}