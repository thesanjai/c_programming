//Check whether a character is vowel or consonant 
#include<stdio.h>
#include<ctype.h>

int main(){
    char c;
    printf("Enter the charcter: ");
    scanf("%c",&c);
    char copy=c;
    c=tolower(c);

    switch(c){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("%c is vowel",copy);
            break;
        default:
            printf("%c is consonant",copy);
    }

    return 0;
}