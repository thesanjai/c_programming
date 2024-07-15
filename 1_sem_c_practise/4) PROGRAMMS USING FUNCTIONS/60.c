// Reverse the sentence using recursion

#include <stdio.h>
#include <string.h> 
#include <stdlib.h>

void str_rev(char *str, int start, int end){
    if(start > end){
        return;
    }else{
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        str_rev(str, start+1, end-1);  // Recursive call with updated start and end indices.
    }
}

int main(){
    char* str;
    printf("Enter the string: ");
    fgets(str, 100, stdin);

    printf("Original String: %s\n",str);

    str_rev(str,0,strlen(str)-2);

    printf("Reversed string: %s\n", str);

    return 0;
}