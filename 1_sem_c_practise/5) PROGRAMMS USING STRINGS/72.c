//Palindrome checking
#include <stdio.h>

#define slen(s) ({ int n=0;while(s[n]) n++;n;})

int main(){
    char* str;
    printf("Enter the string : ");
    scanf("%99[^\n]s",str);

    int i=0, j=slen(str) - 1;

    while(i<j){
        if(str[i++] != str[j--]) {
            printf("%s is NOT A PALINDROME\n",str);return 0;
        }
    }
   printf("%s is Palindrome\n",str);
    return 0;
}