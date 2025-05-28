#include<stdio.h>

int main(){
    int a=1;
    int b=0;
    int c=0;
    int d=0;
    int e=0;

    b= ++a + ++a;
    a=1;
    c= a++ + a++;
    a=1;
    d= ++a + a++;
    a=1;
    e= a++ + ++a;
    a=1;

    int x=10;
    int u;
    char name[10];

    printf("a=%d\n",a);
    printf("b=%d\n",b); 
    printf("c=%d\n",c);
    printf("d=%d\n",d);
    printf("e=%d\n",e);

    return 0;
}

/*
    NOTES:-
            ++a pre increment then the entire sequence is updated all are dependent on a
            a++ post increment then the individual sequence is updated all are independent on a
*/