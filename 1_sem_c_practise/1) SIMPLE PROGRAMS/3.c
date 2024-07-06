//.Convert Celsius to Fahrenheit
#include<stdio.h>

int main(int argc, char *argv[]) {
    float celsius, fahrenheit;
    printf("Enter the temperature in Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9/5) + 32;
    printf("The temperature in Fahrenheit is: %.2f\n", fahrenheit);
    return 0;
}   