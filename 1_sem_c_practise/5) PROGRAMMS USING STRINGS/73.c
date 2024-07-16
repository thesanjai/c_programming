//.convert a name into its ascii values.
#include <stdio.h>
#include <stdlib.h>
int main(){
    char *str=(char*)malloc(sizeof(char));
    printf("Enter the string : ");
    scanf("%99[^\n]s",str);

    for(int i=0;str[i]!='\0';i++){
        printf("%d %c\n",str[i],str[i]);
    }
    return 0;
}