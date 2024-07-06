#include<stdio.h>
#include<string.h>

int main(){
    char a[15]="hello world";
    char b[15]="Welcome CSBS";


    printf("content of a = %s\n",a);
    printf("content of b = %s\n",b);

    printf("string length of a = %ld\n",strlen(a));
    printf("string length of b = %ld\n",strlen(b));
    printf("size of a = %ld\n",sizeof(a));
    printf("size of b = %ld\n",sizeof(b));

    printf("Enter string for a(give input more than size 15): ");
    scanf("%[^\n]",a);

    printf("content of a = %s\n",a);
    printf("content of b = %s\n",b);
    printf("string length of a = %ld\n",strlen(a));
    printf("string length of b = %ld\n",strlen(b));
    printf("size of a = %ld\n",sizeof(a));
    printf("size of b = %ld\n",sizeof(b));

    printf("b value is changed to \"sanjai\" \n");//overrite the content of b
    b[0]='s';
    b[1]='a';
    b[2]='n';
    b[3]='j';
    b[4]='a';
    b[5]='i';

    printf("content of a = %s\n",a);
    printf("content of b = %s\n",b);
    printf("string length of a = %ld\n",strlen(a));
    printf("string length of b = %ld\n",strlen(b));

    printf("size of a = %ld\n",sizeof(a));
    printf("size of b = %ld\n",sizeof(b));
    
    printf("add of a = %p\n",&a);
    printf("add of b = %p\n",&b);
    
    return 0;
}