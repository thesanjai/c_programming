#include<stdio.h>

int main(){

    int x,y=5,z=5;

    x=y==z;   // if y==z =>true x=>1
              // if y!=z =>false x=0 
    printf("%d",x);
    return 0;
}
/*
comparison == operator has higher precedence over assignment = operator
*/


    // // TRY IT OUT

    // // #include<stdio.h>
    // int main(){
    // int x=10,y=5,z=5;

    // x+=y==z;

    // printf("%d ",x);

    // return 0;
    // }
