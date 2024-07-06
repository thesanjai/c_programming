#include <stdio.h>

int main(){
    char buff[4] ={1,2,3,4};
    char p =(buff+1)[2];  // buff[2] => buff +2
    //char p=(buff+0)[0];
    printf("%d",p);
    return 0;
}