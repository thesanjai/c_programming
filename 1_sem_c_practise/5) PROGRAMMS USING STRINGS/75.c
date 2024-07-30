//comparing 2 strings without strcmp function
#include <stdio.h>
#include <stdlib.h>

int main(){
    char *str1 =(char*)malloc(sizeof(char));
    char *str2 =(char*)malloc(sizeof(char));

    printf("Enter the string 1: ");
    scanf("%99[^\n]s",str1);
    printf("Enter the string 2: ");
    scanf(" %99[^\n]s",str2);

    for(int i=0; str1[i]!='\0' && str2[i] !='\0'; i++){
        if(str1[i]!= str2[i]){
            printf("Strings are not equal\n");
            return 0;
        }
    }
    printf("Strings are equal\n");
    return 0;
}