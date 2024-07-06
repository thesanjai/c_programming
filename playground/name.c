#include<stdio.h>

int main(){

    char name[100];
    printf("Enter the name: ");
    scanf("%6[^\n]s",name);

    printf("name => %s\n",name);
    return 0;
}