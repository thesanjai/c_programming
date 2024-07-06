#include <stdio.h>

int main(){

     int x=10;
    static int y= x; //try replace x with 10==10

    if(x==y) printf("Yes\n"); else printf("No\n"); 

    return 0;
}
/*NOTE:
    ONLY CONSTANT VALUES ARE ASSIGNED TO STATIC VARIABLES
*/