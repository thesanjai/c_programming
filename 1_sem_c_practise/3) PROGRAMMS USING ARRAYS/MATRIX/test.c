#include <stdio.h>

int main(){

    char name[10];
    while(1){
     printf("Enter the name: ");
        if( scanf(" %9[^\n]s",name) != 0){
            break;
        }else{
            printf("Invalid input\n");
            printf("try again...\n");
        }

    }

    printf("%s ",name);
}