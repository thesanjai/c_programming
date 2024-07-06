#include<stdio.h>
#include<string.h>

int length(char* str){
    int count=0;
    for(int i=0;str[i]!='\0';i++){
        count++;
    }
    return count;
}

int main(){
    char* str;
    printf("Enter the string: ");
    scanf("%[^\n]",str);

    printf("Length of the string %s = %d\n",str,length(str));

    return 0;
}