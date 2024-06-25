#include<stdio.h>

int main(){
    signed char i=0; //try unsigned char i=-130 && signed char i=-130;
    for(;i>=0;i++); //try i<=0
    printf("%d\n",i);
    return 0;
}
/*  NOTE:
    char 1byte=8 bits
    2^8 =256
    we said signed, so -128 to 127
*/