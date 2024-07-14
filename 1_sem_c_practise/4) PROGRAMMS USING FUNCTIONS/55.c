//dec to octal

#include <stdio.h>

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

int main(){
    int dec;
    printf("Enter a decimal number: ");
    scanf("%d", &dec);

    printf("%d (decimal) => %d octal \n",dec,decimal_to_octal(dec));
    return 0;

}