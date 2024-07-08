#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Function to find the number of digits in an integer
int find_length_int(int a) {
    int len = 0;
    if (a == 0) return 1; // Special case for 0
    while (a != 0) {
        a = a / 10;
        len++;
    }
    return len;
}

// Function to extract and process the fractional part of a double
int find_decimal_part(double a) {
    double fractional_part = a - (int)a; // getting the value after the decimal
    int fractional_data = (int)(fractional_part * 1000000); // max length of decimal in double 6

     // Removing trailing zeros
    while (fractional_data != 0 && fractional_data % 10 == 0) {
        fractional_data /= 10;
    }

    if(fractional_data >= 9999){
        fractional_data /= 10000;
        fractional_data = fractional_data +1;
    }
     // Removing trailing zeros
    while (fractional_data != 0 && fractional_data % 10 == 0) {
        fractional_data /= 10;
    }

    return fractional_data;
}

int main() {



   printf("%d\n%d\n",11,-1);
   
}
    
