#include<stdio.h>

//RUN THIS CODE IN ESSENTIALS AND GCC3 LAB
int main(){
    char a[2],b[2],c[2],d[2];

    printf("Enter a char for a[2]: ");// test input => sanjai hema siva kumar 
    scanf("%s",a);
    printf("[After scanf() of a] Value in a: %s\n",a);
    printf("[before scanf()] Value in b: %s\n",b);
    printf("[before scanf()] Value in c: %s\n",c);
    printf("[before scanf()] Value in d: %s\n",d);

    putchar('\n');

    printf("Enter a char for b[2]: ");
    scanf("%s",b);
    printf("[After scanf() of b] Value in a: %s\n",a);
    printf("[After scanf() of b] Value in b: %s\n",b);
    printf("[before scanf()] Value in c: %s\n",c);
    printf("[before scanf()] Value in d: %s\n",d);

    putchar('\n');

    printf("Enter a char for c[2]: ");
    scanf("%s",c);
    printf("[After scanf() of c] Value in a: %s\n",a);
    printf("[After scanf() of c] Value in b: %s\n",b);
    printf("[After scanf() of c]Value in c: %s\n",c);
    printf("[before scanf()] Value in d: %s\n",d);

    putchar('\n');

    printf("Enter a char for d[2]: ");
    scanf("%s",d);
    printf("After all scanf()\n");
    printf("Value in a: %s\n",a);
    printf("Value in b: %s\n",b);
    printf("Value in c: %s\n",c);
    printf("Value in d: %s\n",d);

    return 0;
}