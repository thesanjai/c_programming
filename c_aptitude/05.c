#include<stdio.h>

int main(){

    printf("printf1->%d\n",printf("sanjai"));
    printf("printf2->%d\n",printf("123"));
    printf("printf3->%d\n",printf("  "));//space

    printf("printing nested printf->%d",printf("printf3->%d",printf("  ")));


    /*
        NOTE:
            printf function retruns an integer
            printf function 1st print the content of the inner printf then it returns an count and start printing the outer printf
    */

    printf("\n\n\n");
    int a,b,c;
    printf("scanf1->%d\n",scanf("%d",&a));
    printf("scanf2->%d\n",scanf("%d%d",&a,&b));
    printf("scanf3->%d\n",scanf("%d%d%d",&a,&b,&c));

    /*
        NOTE:
            scanf function returns the no. of successful inputs;
    */
    return 0;
}