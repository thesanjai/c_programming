#include<stdio.h>

int main(){
    
    char a1[]={'a','b','c'};
    char* a2="jai";
    int a3=10;
    int *a=&a3;

    printf("char ->%ld\n",sizeof(char));
    printf("char[] ->%ld\n",sizeof(a1));
    printf("char* value ->%ld\n",sizeof(*a2));
    printf("char* address ->%ld\n",sizeof(a2));
    printf("int ->%ld\n",sizeof(int));
    printf("long ->%ld\n",sizeof(long));
    printf("long long ->%ld\n",sizeof(long long));
    printf("long int ->%ld\n",sizeof(long int));
    printf("float ->%ld\n",sizeof(float));
    printf("double ->%ld\n",sizeof(double));
    printf("long double ->%ld\n",sizeof(long double));
    printf("pointer value ->%ld\n",sizeof(*a));
    printf("pointer address ->%ld\n",sizeof(a));
        

    return 12;
}

