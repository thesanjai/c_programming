#include<stdio.h>

#define prod(a,b) a*b

int main(){
    int x=3,y=4;
    printf("%d",prod(x+2,y-1));
    return 0;
}

/*  NOTE:
    We think ans is 15 , but NOT
    why?
    compiler use operator precedence
    it sends the x+2=5 and y-1=3 to the prod function
    then use BODMAS
    x+2*y-1
    x+(2*y)-1
    3+(2*4)-1
    //10
*/