#include<stdio.h>

int main(){
    char str[]="codeio";
    char* s1=str;
    
    for(int i=0;i<4;i++){
        printf("%c",*str); //try *s1
        s1++;
    }
    return 0;
}