//Convert :Bin to oct; oct to bin
//binary to octal is straightly not possible, first you covert the bin to dec and then convert it into oct // vice versa

#include <stdio.h>
#include <math.h>

 int octal_to_decimal(int a){
     int decimal = 0, i = 0, rem;
    while (a!= 0) {
        rem = a % 10;
        decimal += rem * pow(8, i);
        ++i;
        a /= 10;
    }
    return decimal;
}
int binary_to_decimal(int a){
    int decimal = 0, i = 0, rem;
    while (a!= 0) {
        rem = a % 10;
        decimal += rem * pow(2, i);
        ++i;
        a /= 10;
    }
    return decimal;
}
int decimal_to_binary(int a){
    int binary = 0, i=1, rem;
    while (a!= 0) {
        rem = a % 2;
        binary = binary  + rem*i;
        a /= 2;
        i = i*10;
    }
    return binary;

}

int decimal_to_octal(int a){
    int octal = 0, i = 1, rem;
    while (a!= 0) {
        rem = a % 8;
        octal = octal  + rem * i;
        a /= 8;
        i = i*10;
    }
    return octal;
}

int binary_to_octal(int a){
    return decimal_to_octal(binary_to_decimal(a));
}
int octal_to_binary(int a){
    return decimal_to_binary(octal_to_decimal(a));
}
int main(){
    int oct;
    printf("Enter a octal number: ");
    scanf("%d",&oct);
    
    printf("%d (octal) => %d (binary)\n",oct,octal_to_binary(oct));

    int bin;
    printf("Enter the binary number: ");
    scanf("%d",&bin);

    printf("%d (binary) => %d (octal)\n",bin,binary_to_octal(bin));
    return 0;
}
