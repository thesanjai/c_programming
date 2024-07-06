//Making simple calculator in c

#include <stdio.h>

int main(){
    int n1,n2;
    printf("Enter the 2 numbers: "), scanf("%d%d",&n1,&n2);

    char op;
    printf("Enter the operation (+,-,*,/,%%): "), scanf(" %c",&op);

    switch(op){
        case '+': printf("%d + %d = %d \n",n1,n2,n1+n2); break;
        case '-': printf("%d - %d = %d \n",n1,n2,n1-n2); break;
        case '*': printf("%d * %d = %d \n",n1,n2,n1*n2); break;
        case '/': printf("%d / %d = %.3f \n",n1,n2,(float)n1/n2); break;
        case '%': printf("%d %% %d = %d \n",n1,n2,n1%n2); break;
        default:perror("WRONG OPTION\n");
    }

    return 0;
}