//Lower to Upper
#include<stdio.h>

int main(){
    char* str;
    printf("Enter a string: ");
    scanf("%[^\n]",str);
    
    /*
    int n=0;
    while(str[++n]!='\0');
    */
   for(int i=0;str[i]!='\0';i++){
    if(str[i]>='a' && str[i]<='z'){
        str[i]=str[i]-32;
    }
   }

   printf("%s\n",str);
   
    return 0;
}