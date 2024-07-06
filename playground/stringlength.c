#include<stdio.h>

#define slength(s) ({int n=0; while(s[n]) n++; n;})

int main(){
    char* str;
    printf("Enter a String: ");
    scanf("%[^\n]s",str);

    int n=0;
    while(str[++n]!='\0');  //++n--> without null character(strlen)  // n++ with null character(sizeof)
    printf("Length of String: %d\n",n);
    printf("Length of String:[slength] => %d\n",slength(str));
    return 0;
}