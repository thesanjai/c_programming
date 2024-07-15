#include <stdio.h>

int main(){
    int a = 5;
    float b;
    double c;

    printf("%ld\n",sizeof(++a + b));
    printf("a= %d\n",a);
    printf("%ld\n",sizeof(++a + c));
    printf("a= %d\n",a);

    printf("\n");
}
/*if you perform any operation inside the sizeof function it will not works
    the value of the variable remains same
            int this case , i do ++a , but a is not incremented , it was still holds the value as 5
    
    if a add the low priority datatype with high priority datatype, the resultant answers was in the high priority data type
*/