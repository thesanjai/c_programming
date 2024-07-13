#include <stdio.h>
int find_length_int(int a){

    int len=0;
    while(a!=0){
        a=a/10;
        len++;
        printf("%d\n",len);
    }

    return len;
}
int main() {
    double data;
    printf("Enter data: ");
    scanf("%lf", &data);
/*
    double fractional_part = data - (int)data;

    int a =  1000000;
    printf("fractional data = %d\n",fractional_data);

    while(fractional_data%10 == 0){
        fractional_data /= 10;
    }

    printf("fractional data = %d\n",fractional_data);
*/

printf("%lf",data)
    return 0;
}
