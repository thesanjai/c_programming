#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>

int main(){

    char* password;
    printf("Enter the Password: ");
    scanf("%[^\n]s",password);
    
    char* exe="./password";
    exe=strcat(exe,password);

    execl("./password sanjai",NULL);
    return 0;
}