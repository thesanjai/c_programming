#include<stdio.h>

int main(){
    char* str="sanjai";
    int n=0;
    while(str[++n]!='\0');
    printf("ans->%d",n)
    return 0;
}