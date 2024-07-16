#include <stdio.h>

int main(){
    int x=4,y=4,z=4,a=1;

    if(x==y==z){
        printf("yes\n");
    }else{
        printf("No\n");
    }

    if(x==y==a){
        printf("yes\n");
    }else{
        printf("No\n");
    }

    return 0;
}
/*NOTES
    == evaluates from left to right

    first it evaluates x==y if true it returns 1, else returns 0
    then these 0 or 1 is compared with other variable , respect to the result, the answer will be printed
*/