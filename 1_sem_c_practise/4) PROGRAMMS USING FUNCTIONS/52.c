//Convert :Bin to dec; dec to bin
#include <stdio.h>
#include <math.h>

int main(){
    int dec;
    printf("Enter a decimal number: ");
    scanf("%d",&dec);
    int copy_dec =dec;
    int d_t_b =0;
    int index =1;

    while(dec!=0){
        int remainder = dec % 2;
        d_t_b = d_t_b + remainder * index;
        dec = dec / 2;
        index = index * 10;
    }

    printf("%d (decimal) =>  %d (binary)\n",copy_dec,d_t_b);
    printf("%25c \n",'-');
    int bi;
    printf("Enter the binary number: ");
    scanf("%d",&bi);
    int copy_bi =bi;

    int b_t_d =0;
    int count =0;
    while(bi != 0){
        int rem =bi%10;
        b_t_d = b_t_d + rem * pow(2,count++);
        bi = bi/10;
    }

    printf("%d (binary) =>  %d (decimal)\n",copy_bi,b_t_d);

    return 0;
}
