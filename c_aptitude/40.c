#include <stdio.h>

int main(){

    int a=5, b=10 ,c=20;

    {
        int a=2;
        c=1;

        a++;
        b++;
        c++;
    }

    printf("a=%d b=%d c=%d\n",a,b,c);
    return 0;
}
/*NOTES
    if we use {} inside any function it will create a local memory inside to that function

    inside {} we can use all variables, which was already declared outside
    the value of the outer variables get affected , if any changes was done inside to the outer variables

    if we declare the new variable inside the {}  even with the same name as the outer variable, new memory was 
    allocated to the new varialbe , it scopes was inside to that funtion only
    so, any changes done to the new variables will not affect the outer variables
*/