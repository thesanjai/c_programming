#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char* string;
   printf("Enter the string: ");
   scanf("%[^\n]s",string);

   printf("%s",string);
   return 0;
}