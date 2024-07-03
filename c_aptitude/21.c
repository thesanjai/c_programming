#include <stdio.h>

int main(){
    int a[]={1,2,3,4,5,6};
    int b=&a;
    int c=&a+1;

    printf("%d\n%d\n",b,c);
    printf("%d",c-b);
    return 0;
}
/* NOTES:
    len(a)=6;
    sizeof(int)=4;

    so, sizeofpointer is 4*6 =>24

    in pointer if you do pointer++ => (pointer =pointer+1)
    then, the new memory size is (2*how_many_increment) times the older memory size
                                    how_many_increment=1,2,3,.....
*/