#include <stdio.h>

// Function to print all prime factors of a given number n
void primeFactors(int n) {
    // Print the number of 2s that divide n
    while (n % 2 == 0) {
        printf("%d ", 2);
        n = n / 2;
    }

    // n must be odd at this point. So we can skip one element (i.e., we can check only odd numbers)
    for (int i = 3; i * i <= n; i += 2) {
        // While i divides n, print i and divide n
        while (n % i == 0) {
            printf("%d ", i);
            n = n / i;
        }
    }

    // This condition is to handle the case when n is a prime number
    // greater than 2
    if (n > 2)
        printf("%d ", n);
}

int main() {
    int n;
    printf("Enter a number to find its prime factors: ");
    scanf("%d", &n);
    printf("Prime factors of %d are: ", n);
    primeFactors(n);
    return 0;
}
