// dec to hex

#include <stdio.h>
#include <math.h>

int dec_to_hec(int a){
    int hex=0,count =0;
    while(a != 0){
        int rem = a%10;
        hex = hex + rem * pow(16,count++);
        a = a/10;
    }
    return hex;
}

int main(){
    int dec;
    printf("Enter the decimal number: ");
    scanf("%d",&dec);

    printf("%d (decimal) => %d (hexadecimal)\n",dec,dec_to_hec(dec));
    return 0;
}