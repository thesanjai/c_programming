#include<stdio.h>

int main(){
    int a=1;
    int b=1;

    int c= a||--b;//if first condition true , next will not execute, because it is OR
                  //if first condition fails, it will check for next condition

    int d=a--&&--b; //if fist condition fails, it will not execute the next
                    //if first condtion true, then it will execute the next condition

    printf("a=%d\tb=%d\n",a,b);
    printf("c=%d\td=%d\n",c,d);

    return 0;   
}