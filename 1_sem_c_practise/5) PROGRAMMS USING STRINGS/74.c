//calculating string length without strlen function
#include <stdio.h>
#include <stdlib.h>

#define slen(s) ({ int n=0;while(s[n]) n++;n;})

int main(){
    char *str=(char*)malloc(sizeof(char));
    printf("Enter the string : ");
    scanf("%99[^\n]s",str);
    printf("Length of %s => %i\n",str,slen(str));
    return 0;
}